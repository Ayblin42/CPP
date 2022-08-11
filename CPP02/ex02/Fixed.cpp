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
#include <tgmath.h>


Fixed::Fixed(void)
	: _virgulefixe(0)
{
	//std::cout << "Default constructor called" << NRM<<std::endl;
}

Fixed::Fixed(int const nb)
{
	//std::cout << "Int constructor called" << NRM<<std::endl;
	this->_virgulefixe = (nb << _bits);
}

Fixed::Fixed(float const nb)
{
	//std::cout << "Float constructor called" << NRM<<std::endl;
	this->_virgulefixe = int(roundf(nb * (1 << _bits)));
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << NRM<<std::endl;
}

Fixed::Fixed(const Fixed &other) // Constructeur de recopie
{
	//std::cout << "Copy constructor called" << NRM<<std::endl;
	*this = other;
}

Fixed  &Fixed::operator=(const Fixed	&aff) // Operator d’affectation
{
	//std::cout << "Copy assignment operator called" << NRM<<std::endl;
	this->_virgulefixe = aff.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << NRM<<std::endl;
	return this->_virgulefixe;
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << NRM<<std::endl;
	this->_virgulefixe = raw;
}

std::ostream   &operator<<(std::ostream   &o, Fixed const   &rhs)
{
	//std::cout << "TEST " << this->_virgulefixe <<NRM<<std::endl;
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

/* ************************************************************************** */
/*                                  OPERATOR                                  */
/* ************************************************************************** */

bool Fixed::operator>(const Fixed &rhs)
{
	return this->_virgulefixe > rhs._virgulefixe;
}

bool Fixed::operator<(const Fixed &rhs)
{
	return this->_virgulefixe < rhs._virgulefixe;
}

bool Fixed::operator>=(const Fixed &rhs)
{
	return this->_virgulefixe >= rhs._virgulefixe;
}

bool Fixed::operator<=(const Fixed &rhs)
{
	return this->_virgulefixe <= rhs._virgulefixe;
}

bool Fixed::operator==(const Fixed &rhs)
{
	return this->_virgulefixe == rhs._virgulefixe;
}

bool Fixed::operator!=(const Fixed &rhs)
{
	return this->_virgulefixe != rhs._virgulefixe;
}

/* ************************************************************************** */
/*                               Arithmetic operators                         */
/* ************************************************************************** */

Fixed Fixed::operator+(const Fixed &rhs)
{
	Fixed ret;

	ret.setRawBits(this->_virgulefixe + rhs._virgulefixe);
	return (ret);
}

Fixed Fixed::operator-(const Fixed &rhs)
{
	Fixed ret;

	ret.setRawBits(this->_virgulefixe - rhs._virgulefixe);
	return (ret);
}

Fixed Fixed::operator*(const Fixed &rhs)
{
	Fixed ret;

	ret.setRawBits(this->_virgulefixe * rhs._virgulefixe >> _bits);
	return (ret);
}

Fixed Fixed::operator/(const Fixed &rhs)
{
	Fixed ret;

	ret.setRawBits(((this->_virgulefixe)  * (1 << _bits)) / rhs._virgulefixe);
	return (ret);
}

/* ************************************************************************** */
/*                               INCREMENT / DECREMENT                        */
/* ************************************************************************** */
Fixed  &Fixed::operator++()
{
	this->_virgulefixe++;
	return *this;
}

Fixed  &Fixed::operator--()
{
	this->_virgulefixe--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}
/* ************************************************************************** */
/*                                  STATIC FUNCTIONS                          */
/* ************************************************************************** */
Fixed &Fixed::min(Fixed  &a, Fixed  &b)
{
	if (a > b)
		return b;
	return a;
}

Fixed &Fixed::max(Fixed  &a, Fixed  &b)
{
	if (a < b)
		return b;
	return a;
}

const Fixed &Fixed::min(const Fixed  &a, const Fixed  &b)
{
	if (a._virgulefixe > b._virgulefixe)
		return b;
	return a;
}

const Fixed &Fixed::max(const Fixed  &a, const Fixed  &b)
{
	if (a._virgulefixe < b._virgulefixe)
		return b;
	return a;
}
