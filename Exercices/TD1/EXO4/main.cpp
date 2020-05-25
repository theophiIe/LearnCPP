#include <iostream>
#include "point.hpp"

int main()
{
	Point p{};
	p.afficher();

	Point p1{5, 8};
	p1.afficher();

	p.cloner(p1);
	p.afficher();

	Point p2{7, 4};
	Point p3{p2};
	p3.afficher();

	return 0;
}