/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:46:08 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/10 23:59:40 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
	: _x(Fixed(0)),_y(Fixed(0))
{

}

Point::Point(const float x, const float y)
	: _x(Fixed(x)),_y(Fixed(y))
{

}

Point::Point(const Point& copy)
	: _x(copy._x), _y(copy._y)
{
}

Point::~Point(void)
{
}


Fixed const Point::getX(void) const
{
	return this->_x;
}

Fixed const Point::getY(void) const
{
	return this->_y;
}

Point  &Point::operator=(const Point	&rhs)
{
	this->_x = rhs.getX();
	this->_y = rhs.getY();
	return *this;
}
