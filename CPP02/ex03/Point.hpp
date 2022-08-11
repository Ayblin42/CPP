/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:46:18 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 00:02:10 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
public :

	// Constructors/Destructor
	Point(void);
	Point(const float x, const float y);
	Point(const Point& copy);
	~Point(void);

	// Assignment operator
	Point &operator=(const Point&rhs);

	// Getters
	Fixed const getX(void) const;
	Fixed const getY(void) const;

private :
	Fixed _x;
	Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
