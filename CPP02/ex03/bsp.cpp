/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:45:55 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 00:15:35 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <math.h>

float	area(Point P, Point P1, Point P2)
{
	return fabs((P.getX().toFloat()*(P1.getY().toFloat()-P2.getY().toFloat()) + P1.getX().toFloat()*(P2.getY().toFloat()-P.getY().toFloat())+ P2.getX().toFloat()*(P.getY().toFloat()-P1.getY().toFloat()))/(float)2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float A1 = area(point, a, b);
	float A2 = area(point, c, b);
	float A3 = area(point, a, c);
	float TotalArea = area(a, b, c);

	return (TotalArea == A1 + A2 + A3);
}
