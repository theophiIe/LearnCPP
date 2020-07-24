#include <iostream>
#include <ctime>
#include <iomanip>

int debutMois()
{
    time_t tmm = time(0);
    tm *t;
    t = localtime(&tmm);

    return t->tm_wday - (t->tm_mday) % 7 + 1;
}

int finMois()
{
    time_t actuel = time(0);
    tm *ltm = localtime(&actuel);

    if(1 + ltm->tm_mon == 2)
    {
        return ((1900 + ltm->tm_year)%4 == 0) ? 29+1 : 28+1;
    }

    else if(1 + ltm->tm_mon < 8)
    {
        return ((1 + ltm->tm_mon)%2 == 0) ? 30+1 : 31+1;
    }

    else
    {
        return ((1 + ltm->tm_mon)%2 == 0) ? 31+1 : 30+1;
    }
}

void affichage()
{
    time_t tmm = time(0);
    char* dt = ctime(&tmm);

    std::cout << std::setfill('-') << std::setw(38) << "" << std::setfill(' ') << std::endl;
	std::cout << std::setw(33) << dt;
    std::cout << std::setfill('-') << std::setw(38) << "" << std::setfill(' ') << std::endl;
    std::cout << "   lu   ma   me   je   ve   sa   di" << std::endl;
    std::cout << std::setw(5*debutMois()) << "01";

    auto jour{2};
    auto pos{debutMois()};

    while(pos<7)
    {
        std::cout << std::setw(4) << "0" << jour;            

        jour++;
        pos++;
    }

    std::cout << std::endl;
    
    pos=1;
    while(jour<finMois())
    {
        if(5*(debutMois()+1) < 5*7)
        {
            if(jour<10)
            {
                std::cout << std::setw(4) << "0" << jour;
            }

            else
            {
                std::cout << std::setw(5) << jour;
            }
            
        }

        if(pos%7==0)
            std::cout << std::endl;
        jour++;
        pos++;
    }
}

int main()
{
    affichage();
    std::cout << std::endl;
	return 0;
}