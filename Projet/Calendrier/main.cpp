#include <iostream>
#include <ctime>
#include <iomanip>

enum Jour
{
	Lundi,
	Mardi,
    Mercredi,
    Jeudi,
    Vendredi,
    Samedi,
    Dimanche
};

int main()
{
    std::cout << "Calendrier " << std::endl;

    time_t tmm = time(0);
    char* dt = ctime(&tmm);

    std::cout << "Nombre de sec depuis Janvier 1,1970: : " << tmm << std::endl;

    std::cout << "La date et l'heure sont : " << dt << std::endl;
    
    tm *g = gmtime(&tmm);
    dt = asctime(g);

    std::cout << "La date et l'heure en UTC sont : " << dt << std::endl;

    tm *ltm = localtime(&tmm);

    std::cout << "Année : " << 1900 + ltm->tm_year << std::endl;
    std::cout << "Mois : " << 1 + ltm->tm_mon << std::endl;
    std::cout << "Day : " << ltm->tm_mday << std::endl;
    std::cout << "Jour : " << 1 + ltm->tm_hour << std::endl;

	std::cout << std::setfill('-') << std::setw(50) << "" << std::endl;
	std::cout << std::setfill(' ') << std::setw(15) << 1 + ltm->tm_mon <<", " <<  1900 + ltm->tm_year << std::endl;
    std::cout << std::setfill('-') << std::setw(50) << "" << std::endl;

	return 0;
}