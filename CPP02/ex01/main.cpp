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
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a << NRM<<std::endl;
std::cout << "b is " << b << NRM<<std::endl;
std::cout << "c is " << c << NRM<<std::endl;
std::cout << "d is " << d << NRM<<std::endl;
std::cout << "a is " << a.toInt() << " as integer" << NRM<<std::endl;
std::cout << "b is " << b.toInt() << " as integer" << NRM<<std::endl;
std::cout << "c is " << c.toInt() << " as integer" << NRM<<std::endl;
std::cout << "d is " << d.toInt() << " as integer" << NRM<<std::endl;
return 0;
}
