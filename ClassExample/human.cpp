#include "human.hpp"
#include <iostream>

// Constructeur de la classe Human
Human::Human()
{
	// this permet de faire reference à l'objet qu'on utilise
	std::cout << "Constructeur de la classe Human, son adresse : " << this << std::endl;
}

Human::~Human()
{
	// this permet de faire reference à l'objet qu'on utilise
	std::cout << "Destruction/Libération de la mémoire de la classe Human, son adresse : " << this << std::endl;
}