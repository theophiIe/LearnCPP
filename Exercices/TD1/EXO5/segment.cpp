#include <iostream>

#include "segment.hpp"
#include "point.hpp"

Segment::Segment()
{

}

Segment::Segment(const Point &point1, const Point &point2)
{
	p1.cloner(point1);
	p2.cloner(point2);
}

void Segment::longueur() const
{
	//Faire pythagore
}

bool Segment::estVertical() const
{
	if(p1.getX() == p2.getX())
		return true;

	return false;
}

bool Segment::estHorizontal() const
{
	if(p1.getY() == p2.getY())
		return true;

	return false;
}

bool Segment::estSurDiagonal() const
{
	if(!estVertical() && !estHorizontal())
		return true;

	return false;
}

Segment::~Segment() { std::cout << "Destruction de la classe Segment" << std::endl; }
