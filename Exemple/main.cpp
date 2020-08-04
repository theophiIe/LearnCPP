#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

int main(int argc, char const *argv[])
{
	// Utilisation de la console 
	std::cout << std::hex; // Tout les nombres seront affichés en hax
	std::cout << 111 << std::endl;
	std::cout << 561 << std::endl;
	
	std::cout << std::dec; // Tout les nombres seront affichés en decimal
	std::cout << 111 << std::endl;
	std::cout << 561 << std::endl;

	// Utilisation de la console + de la lib iomanip
	//std::setw(x) permet de faire un nombre d'espace définis
	std::cout << std::setw(15) << "Hello world!" << std::endl;
	std::cout << std::setw(20) << "Hello world!" << std::endl;

	//std::setfill() permet de remplir les espaces de setw par un car choisie
	std::cout << std::setfill('-') << std::setw(15) << "Hello world!" << std::endl;
	std::cout << std::setfill('+') << std::setw(20) << "Hello world!" << std::endl;

	std::cout << "Bonjour tout le monde 22" << std::endl;
	
	// Utilisation de certaine variable
	int var = 1;
	int varopti{1}; // Initialisation plus optimisé

	std::cout << var << std::endl << varopti << std::endl;

	decltype(auto) car = 'a'; // Avec auto le compilo chosie le type le plus approprié pour la variable
	
	int nbr{5};

	decltype(nbr) test{5}; // test sera du obligatoirement tu même type que nbr grâce à deltype()	

	float a{2.0f}; // Pour les doubles les unsigned les float ont dois spécifier 
				   //avec une lettre à la fin exemple f pour float pour bien préciser le type

	// Utilisation de la lib limitq
	std::cout << std::numeric_limits<int>::max() << std::endl; // Affiche le nombre max d'un int
	std::cout << std::numeric_limits<int>::min() << std::endl; // Affiche le nombre min d'un int

	// Saisie de valeur 
	int valeur{0};

	std::cout << "Entrez un nombre : ";
	std::cin >> valeur;
	std::cout << "la valeur entré est : " << valeur << std::endl;

	std::cout << "Entrez un nombre : ";
	std::cin >> valeur;
	std::cout << "la valeur entré est : " << valeur << std::endl;

	// Si on ecrit des le premier cin 2 5 le programme va remplir le buffer ce qui va exécuter
	// les deux commandes cin directement sans reproposer une saisie clavier

	// Utilisation de la lib String
	std::string name{}; // String est un objet dans ce cas la 
	std::cin >> name;
	std::cout << "Comment vous appelez vous ? : " << name << std::endl;

	/*
	std::cin.clear();  						// Permet de reset le buffer
	std::cin.ignore(nbre_char, delimiteur); // Permet d'ignorer des saisies. Si on met pas de délimiteur c'est le premier \n qui est le déimiteur par default
	std::getline(std::cin, string, delimiteur); // lit tout ce qu'il ya dans la ligne permet notament de prendre en compte les espaces lors d'une saisie clavier le delimiteur par default est \n
	std::cin.good(); // renvoie TRUE 1
	std::cin.bad();	// renvoie FALSE 0
	std::cin.fail(); // permet de gerer une erreur lors de la saisie 
	std::cin.eof(); // verifie fin de lecture fichier
	*/
	return 0;
}