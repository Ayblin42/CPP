/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:54:06 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/10 11:33:49 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public :

	Fixed (); // Constructeur par défaut
	Fixed (float const nb);
	Fixed (int const nb);
	Fixed (const Fixed&other); // Constructeur de recopie
	~Fixed (); // Destructeur éventuellement virtuel
	Fixed &operator=(const Fixed&aff); // Operator d’affectation

	// Getters
	int getRawBits( void ) const;
	// Setters
	void setRawBits( int const raw );

	float toFloat(void) const;
	int toInt(void) const;

private :

	static const int	_bits = 8;
	int _virgulefixe;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
