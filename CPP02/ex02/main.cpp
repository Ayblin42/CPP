/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:23:49 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 15:13:21 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << NRM<<std::endl;
std::cout << ++a << NRM<<std::endl;
std::cout << a << NRM<<std::endl;
std::cout << a++ << NRM<<std::endl;
std::cout << a << NRM<<std::endl;
std::cout << b << NRM<<std::endl;
std::cout << Fixed::max( a, b ) << NRM<<std::endl;
return 0;
}
