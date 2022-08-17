/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:21:41 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 14:55:25 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>

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
	//virtual void use(ICharacter &target);

protected:
	std::string _type;
};

#endif
