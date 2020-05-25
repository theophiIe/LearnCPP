#include "point.hpp"
#include <iostream>

Point::Point()
{
	x = 1;
	y = 1;
}

Point::Point(int px, int py)
{
	x = px;
	y = py;
}

Point::Point(const Point &p)
{
	x = p.x;
	y = p.y;
}

int Point::getX() const{ return x; }

int Point::getY() const { return y; }

void Point::afficher()
{
	std::cout << "Les coordonnées en x sont : " << getX() << std::endl;
	std::cout << "Les coordonnées en y sont : " << getY() << std::endl << std::endl;
}

void Point::cloner(const Point &p)
{
	x = p.x;
	y = p.y;
}

Point::~Point() { std::cout << "Destruction de la classe Point" << std::endl; }


