/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:48:10 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/04 14:51:39 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
public:

	// Constructor/Destructor
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void attack(void) const;
private:

	std::string _name;
	Weapon& _weapon;
};

#endif
