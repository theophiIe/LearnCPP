#include <iostream>

// En utilisant & on fais reference à la valeur mise en param permettant de la changer directement
// sans faire de return ou passer par un pointeur
// WARNING ne pas faire de return de reference 
void chgVar(int &var) 
{
	var = 16;
}

// Possible comme en java de faire de la surcharge pour une fonction
int somme(int a, int b)
{
 	return a + b;
}

double somme(double a, double b)
{
 	return a + b;
}

// Pour eviter de faire plusieurs surcharge de fonction on peut utiliser des templates
template<typename T>
T sum(T a, T b)
{
	return a + b;
}

int main(int argc, char const *argv[])
{
	int var{1};

	std::cout << "Valeur avant changement : " << var << std::endl;
	chgVar(var);
	std::cout << "Valeur apres changement : " << var << std::endl;


	auto sum1{5};
	auto sum2{9};

	std::cout << "La somme est : " << somme(sum1, sum2) << std::endl;

	auto sum3{5.53};
	auto sum4{9.04};

	std::cout << "La somme est : " << somme(sum3, sum4) << std::endl;

	//Exemple pour les templates
	std::cout << "La somme est : " << sum(sum1, sum2) << std::endl; // Le compilo chosie directement de le type suivant le contexte
	std::cout << "La somme est : " << sum<int>(sum1, sum2) << std::endl;
	std::cout << "La somme est : " << sum<double>(sum3, sum4) << std::endl;

	// Utilisation de fonction lamda 
	// Permet de stocker une fonction dans une variable (Possible de mettre une fonction lamda en parm d'une fonction)
	auto calcul = [](auto a, auto b){return a+b;};
	std::cout << "La somme est : " << calcul(1, 2) << std::endl;

	// si dans le [] on met :
	// & : toutes les variables par references
	// = : toutes les variables par valeurs

	return 0;
}