#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::~ClapTrap()
{

}

ClapTrap::ClapTrap(const ClapTrap &other) // Constructeur de recopie
{
	*this = other;
}

ClapTrap  &ClapTrap::operator=(const ClapTrap	&rhs) // Operator d’affectation
{
	return *this;
}