#include <iostream>

#define SIZE_TAB 10

void tableauEcriture(int *tab)
{
	for (auto i{0U}; i < SIZE_TAB; ++i)
		tab[i] = i;
}

void tableauLecture(const int *tab)
{
	for (auto i{0U}; i < SIZE_TAB; ++i)
		std::cout << tab[i] << std::endl;
}

int main()
{
	int *tab{new int[10]};

	tableauEcriture(tab);
	tableauLecture(tab);

	delete [] tab;
	
	return 0;
}