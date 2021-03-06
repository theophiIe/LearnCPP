#include <iostream>

#include "segment.hpp"
#include "point.hpp"

int main()
{
	Point p1{4, 7};
	Point p2{7, 2};

	Segment seg{p1, p2};
	
	seg.longueur();	

	if(seg.estVertical())
		std::cout << "Le segment est vertical" << std::endl << std::endl;
	
	if(seg.estHorizontal())
		std::cout << "Le segment est horizontal" << std::endl << std::endl;
	
	if(seg.estSurDiagonal())
		std::cout << "Le segment est sur une diagonal" << std::endl << std::endl;

	return 0;
}