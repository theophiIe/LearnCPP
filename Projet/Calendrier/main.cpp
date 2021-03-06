#include <iostream>
#include <ctime>
#include <iomanip>

int jourActuel(tm *t, int jour)
{
    if(t->tm_mday == jour && jour < 10)
    {
        std::cout << std::setw(8) << "\x1B[31m" << "0" << jour << "\033[0m";
        return 1;
    }

    else if(t->tm_mday == jour && jour >= 10)
    {
        std::cout << std::setw(8) << "\x1B[31m" << jour << "\033[0m";
        return 1;
    }

    else
    {
        return 0;
    }
}

int debutMois(tm *t)
{
    if (t->tm_wday + 7 < t->tm_mday % 7)
    {
        return (t->tm_wday) - (t->tm_mday % 7) % 7 + 1;
    }

    else if (t->tm_wday < t->tm_mday % 7)
    {
        return (t->tm_wday + 7) - (t->tm_mday % 7) % 7 + 1;
    }
    
    else
    {
        return (t->tm_wday) - (t->tm_mday) % 7 + 1;
    }
}

int finMois(tm *t)
{
    if(1 + t->tm_mon == 2)
    {
        return ((1900 + t->tm_year)%4 == 0) ? 29+1 : 28+1;
    }

    else if(1 + t->tm_mon < 8)
    {
        return ((1 + t->tm_mon)%2 == 0) ? 30+1 : 31+1;
    }

    else
    {
        return ((1 + t->tm_mon)%2 == 0) ? 31+1 : 30+1;
    }
}

void premiereLigne(tm *t, int &pos, int &jour)
{
    while(pos<7)
    {
        if(!jourActuel(t, jour))
        {
            std::cout << std::setw(4) << "0" << jour;            
        }

        jour++;
        pos++;
    }
}

void autreLigne(tm *t, int &pos, int &jour)
{
    while(jour<finMois(t))
    {
        if(5*debutMois(t) <= 5*7)
        {
            if(!jourActuel(t, jour))
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
        }

        if(pos%7==0)
        {
            std::cout << std::endl;
        }

        jour++;
        pos++;
    }
}

void affichage(tm *t, time_t tmm)
{
    char* dt = ctime(&tmm);

    std::cout << std::setfill('-') << std::setw(38) << "" << std::setfill(' ') << std::endl;
	std::cout << std::setw(33) << dt;
    std::cout << std::setfill('-') << std::setw(38) << "" << std::setfill(' ') << std::endl;
    std::cout << "   lu   ma   me   je   ve   sa   di" << std::endl;

    std::cout << std::setw(5*debutMois(t));
    if (t->tm_mday == 1)
    {
         std::cout << std::setw(5*debutMois(t)+9) << "\x1B[31m01\033[0m";
    }
    else
    {
         std::cout << "01";
    }
    
    auto jour{2};
    auto pos{debutMois(t)};

    premiereLigne(t, pos, jour);

    std::cout << std::endl;
    
    pos=1;
    autreLigne(t, pos, jour);

    std::cout << std::endl;
}

int main()
{
    time_t tmm = time(0);
    tm *t = localtime(&tmm);
    affichage(t, tmm);

	return 0;
}