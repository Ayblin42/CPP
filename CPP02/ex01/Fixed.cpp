/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:53:58 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/10 15:33:29 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <tgmath.h>


Fixed::Fixed(void)
	: _virgulefixe(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_virgulefixe = (nb << _bits);
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_virgulefixe = int(roundf(nb * (1 << _bits)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) // Constructeur de recopie
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed	&aff) // Operator d’affectation
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_virgulefixe = aff.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_virgulefixe;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_virgulefixe = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

float Fixed::toFloat(void) const
{
	return float((this->_virgulefixe) / (float)(1 << _bits));
}

int Fixed::toInt(void) const
{
	return this->_virgulefixe >> _bits;
}
