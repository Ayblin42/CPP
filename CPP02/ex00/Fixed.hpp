/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:54:06 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 15:44:18 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define NRM  "\x1B[0m"
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT  "\x1B[37m"

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
