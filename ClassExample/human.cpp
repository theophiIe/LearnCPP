#include "human.hpp"
#include <iostream>

//Constructeur de la classe Human
Human::Human()
{
	mName = "Inconnu";
	mAge  = 1;

	// this permet de faire reference à l'objet qu'on utilise
	std::cout << "Constructeur de la classe Human, son adresse : " << this << std::endl;
}

// Exemple different d'init des var
Human::Human(std::string name) : mName(name), mAge(1){}

// Exemple de constructeur complet
Human::Human(std::string name, int age)
{
	mName = name;
	mAge  = age;	
}

// Copie de constructeur
Human::Human(const Human &other)
{
	mName = other.mName;
	mAge  = other.mAge;
}

std::string Human::getName() const
{
	return mName;
}

void Human::setName(const std::string name)
{
	mName = name;
}

void Human::hello()
{
	std::cout << "Hello world" << std::endl;
}

Human::~Human()
{
	// this permet de faire reference à l'objet qu'on utilise
	std::cout << "Destruction/Libération de la mémoire de la classe Human, son adresse : " << this << std::endl;
}


