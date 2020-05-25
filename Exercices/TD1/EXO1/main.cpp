#include <iostream>

#define TAB_SIZE 10

void exo1_Q1()
{
	int tab[TAB_SIZE] = {0,1,2,3,4,5,6,7,8,9};

	int *p{nullptr};
	
	p = tab;

	for (int i{}; i < TAB_SIZE; ++i)
		std::cout << p[i] << std::endl;
}

void exo1_Q2()
{
	std::string *tab{new std::string[3]};

	tab[0] = "truc";
	tab[1] = "machin";
	tab[2] = "chose";

	for (int i{}; i < 3; ++i)
		std::cout << tab[i] << std::endl;

	delete [] tab;
}

int main(int argc, char const *argv[])
{
	exo1_Q1();
	exo1_Q2();
	
	return 0;
}