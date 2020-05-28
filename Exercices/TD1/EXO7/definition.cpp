#include <iostream>

#include "cstring.hpp"
#include "definition.hpp"

Definition::Definition()
{
	std::string mot{"Indéfinie"};
	sMot = mot;

	std::string def{"Indéfinie"};
	sDef = def;
}

Definition::Definition(std::string mot)
{
	sMot = mot;

	std::string def{"Indéfinie"};
	sDef = def;
}

Definition::Definition(std::string mot, std::string def)
{
	sMot = mot;
	sDef = def;
}

std::string Definition::getClef() const { return sMot.getString(); }

std::string Definition::getDef() const { return sDef.getString(); }

Definition::~Definition() { std::cout << "Destruction de la classe Definition" << std::endl; }