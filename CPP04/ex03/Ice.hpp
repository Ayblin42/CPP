/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:21:56 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 14:59:26 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{
public:
    Ice();
    ~Ice();
    Ice (const Ice&other);
	Ice &operator=(const Ice&rhs);

	AMateria* clone() const;
	void use(ICharacter &target);
};

#endif
