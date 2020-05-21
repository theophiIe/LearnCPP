#include <iostream>

#define TAB_SIZE 5

int main(int argc, char const *argv[])
{
	int tab[TAB_SIZE];

	const int SIZE = 5;
	int tab2[SIZE] = {0, 3, 4, 3, 4};

	for (int i{}; i < SIZE; ++i)
		std::cout << tab2[i] << std::endl;
	
	// Cette fonctionnalité marche à partir de c++ 17 on dois compiler avec :
	// g++ -std=c++17 tab.cpp -o tableau
	std::cout << "La taille du tableau : " << std::size(tab2) << std::endl;

	for (int i{}; i < std::size(tab2); ++i)
		std::cout << tab2[i] << std::endl;
	return 0;
}