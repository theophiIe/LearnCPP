#include <iostream>

// Pour l'optimisation de la mémoire mettre les variables
// les plus lourde en premier dans la structure
struct Animal
{
	std::string name;
	int age;
};

// typedef n'est plus utile pour les strcut
// si on souhaite utiliser un typedef en c++
// c'est using

using Bete = struct Animal;

enum Polarity
{
	NEGATIVE,
	POSITIVE
};

struct Processor
{
	std::string model;
	Polarity p;
	int watts;
};

int main(int argc, char const *argv[])
{
	Animal a{"Panda", 4};

	// Permet de faire une copie de Animal a
	Animal aa{a};
	
	std::cout << aa.name << std::endl;

	Animal b{};
	b.name = "Chien";
	b.age  = 10;

	std::cout << "Le nom : " << b.name << std::endl << "L'age : " << b.age << std::endl;

	// Copie de la structure de b
	Bete bb{b};
	std::cout << "Le nom : " << bb.name << std::endl << "L'age : " << bb.age << std::endl;

	// Exemple de struct avec une enum
	Processor proc{"i7 4470", Polarity::NEGATIVE, 50};

	if(proc.p == Polarity::NEGATIVE)
		std::cout << "NEGATIVE value" << std::endl;
	
	else 
		std::cout << "POSITIVE value" << std::endl;
	
	return 0;
}