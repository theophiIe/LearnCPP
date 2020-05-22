#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{
	int a{5};

	// Initialisation d'un pointeur à null
	int *ptr{nullptr};

	ptr = &a;

	std::cout << *ptr << std::endl;

	// Exemple d'allocation dynamique à l'ancienne
	// Le new correspond au malloc du c
	int *val{new int(16)};

	std::cout << *val << std::endl;

	// Correspond au free du c
	delete val;
	// Apres le free c'est de faire pointer le pointeur faire null
	val = nullptr;

	//Ancienne méthode pour l'allocation de tab
	int *tab{new int[10]};

	// Permet de free le tab
	delete [] tab;

	/* Les nouveaux pointeurs du c++ :
		- unique_ptr (les plus utilisés)
		- share_ptr
		- weak_ptr
		Ses pointeurs sont dis intelligeant on utilise 
		la lib memory pour les utiliser
	*/

	// Permet de créer un pointeur unique PAS besoin de free se pointeur 
	std::unique_ptr<int> pNumber{std::make_unique<int>(18)};

	std::cout << *pNumber << std::endl;

	// Exemple d'un pointeur partagé
	std::shared_ptr<int> p2Number{std::make_shared<int>(11)};

	return 0;
}