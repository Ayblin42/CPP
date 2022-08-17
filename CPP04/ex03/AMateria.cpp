/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:21:46 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 14:55:25 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
	:_type("default")
{

}
AMateria::AMateria(std::string const  &type)
	:_type(type)
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria &other) // Constructeur de recopie
{
	*this = other;
}

AMateria  &AMateria::operator=(const AMateria	&rhs) // Operator d’affectation
{
	this->_type = rhs._type;
	return *this;
}

std::string const  &AMateria::getType() const
{
	return this->_type;
}
