#include <iostream>

#include "cstring.hpp"

CString::CString()
{
	nbChaine++;
}

CString::CString(char car)
{
	pMot = car;
	nbChaine++;
}

CString::CString(std::string mot)
{
	pMot = mot;
	nbChaine++;
}

CString::CString(CString &cst)
{
	std:: string mot = cst.getString();
	pMot = mot;
	nbChaine++;
}

int CString::nbrChaines() 
{
	return CString::nbChaine;
}

CString CString::plus(char car) const
{
	std::string newMot = pMot + car;
	CString cst{newMot};

	return cst;
}

CString CString::plus(std::string mot) const
{
	std::string newMot = pMot + mot;
	CString cst{newMot};

	return cst;
}
			
std::string CString::getString() const { return pMot; }
		
bool CString::plusGrandQue(CString cst) const
{	
	auto pos{0U};
	std::string courantMot = getString();
	std::string parmMot    = cst.getString();

	do
	{
		if(courantMot[pos] < parmMot[pos])
			return false;

		else if(courantMot[pos] > parmMot[pos])
			return true;

		else
			pos++;

	} while(pos < std::size(courantMot) || pos < std::size(parmMot));

	return false;
}

bool CString::infOuEgale(CString cst) const
{
	std::string courantMot = getString();
	std::string parmMot    = cst.getString();

	if(courantMot == parmMot)
		return true;

	auto pos{0U};
	
	do
	{
		if(courantMot[pos] < parmMot[pos])
			return true;

		else if(courantMot[pos] > parmMot[pos])
			return false;

		else
			pos++;

	} while(pos < std::size(courantMot) || pos < std::size(parmMot));

	return false;
}
			
CString CString::plusGrand(CString cst) const
{
	if(std::size(getString()) < std::size(cst.getString()))
		return cst;

	std::string newMot = getString();
	CString newCst{newMot};
	
	return newCst;
}

CString::~CString() { std::cout << "Destruction de la classe CString" << std::endl; }
