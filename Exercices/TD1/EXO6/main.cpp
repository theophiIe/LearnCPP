#include <iostream>

#include "cstring.hpp"

int CString::nbChaine{0};

int main()
{
	CString s1("toto"), s2('q'), s3;

	// Affiche le nombre de chaine créer
	std::cout << "NbrChaines : " << CString::nbrChaines() << std::endl;

	s3 = s1.plus('w');
	std::cout << "s3 = " << s3.getString() << std::endl;

	// Si s1>s2 au sens alphabétique
	if(s1.plusGrandQue(s2))
		std::cout << "Plus grand" << std::endl;

	// Si s1<=s2 au sens alphabétique
	if(s1.infOuEgale(s2))
		std::cout << "Plus petit" << std::endl;

	// Retourne s1 si s1>s2, s2 sinon
	s3 = s1.plusGrand(s2);
	std::cout << s3.getString() << std::endl;

	return 0;
}