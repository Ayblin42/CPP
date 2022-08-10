/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:54:06 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/09 15:46:10 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public :

	Fixed (); // Constructeur par défaut
	Fixed (const Fixed&other); // Constructeur de recopie
	~Fixed (); // Destructeur éventuellement virtuel
	Fixed &operator=(const Fixed&aff); // Operator d’affectation

	// Getters
	int getRawBits( void ) const;
	// Setters
	void setRawBits( int const raw );

private :

	static const int	_bits = 8;
	int _VirguleFixe;
};
