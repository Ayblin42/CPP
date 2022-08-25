/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:21:41 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 21:06:28 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>

# define NRM  "\x1B[0m"
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT  "\x1B[37m"

class AMateria
{
public:
	AMateria();
	AMateria(std::string const  &type);
	virtual ~AMateria();
	AMateria (const AMateria&other);
	AMateria &operator=(const AMateria&rhs);

	std::string const  &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

protected:
	std::string _type;
};
