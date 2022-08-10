/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:23:49 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/10 18:28:19 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}



 A = (0, 0),  = p2
 B = (10, 30), = p3
 C = (20, 0),

  P(11, 15)

return (11 - 10)* (15 - 30) * (0 - 30) - (0- 10) ;


return (p1.x - p3.x)* (p1.y - p3.y) * (p2.y - p3.y) - (p2.x - p3.x) ;
