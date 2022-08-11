/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:53:58 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 15:13:21 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
	: _VirguleFixe(0)
{
	std::cout << "Default constructor called" << NRM<<std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << NRM<<std::endl;
}

Fixed::Fixed(const Fixed &other) // Constructeur de recopie
{
	std::cout << "Copy constructor called" << NRM<<std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed	&aff) // Operator d’affectation
{
	std::cout << "Copy assignment operator called" << NRM<<std::endl;
	this->_VirguleFixe = aff.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << NRM<<std::endl;
	return this->_VirguleFixe;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << NRM<<std::endl;
	this->_VirguleFixe = raw;
}
