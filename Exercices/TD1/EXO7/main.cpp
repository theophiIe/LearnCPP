#include <iostream>

#include "cstring.hpp"
#include "definition.hpp"

int CString::nbChaine{0};

int main()
{
	Definition homer{"Homer", "Buveur de biere"};

	std::cout << "La définition du mot " << homer.getClef() << " est : " << homer.getDef() << std::endl;

	return 0;
}