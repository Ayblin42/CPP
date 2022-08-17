/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:21:51 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 14:59:45 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

Ice::Ice()
	:AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(const Ice &other)
	:AMateria(other) // Constructeur de recopie
{
}

Ice  &Ice::operator=(const Ice	&rhs) // Operator d’affectation
{
	this->_type = rhs._type;
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void use(ICharacter &target)
{
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}
