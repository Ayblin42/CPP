/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:17:19 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/04 14:51:39 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"


class HumanB
{
public:

	// Constructor/Destructor
	HumanB(std::string name);
	~HumanB(void);

	// Setters
	void setWeapon(Weapon& weapon);

	void attack(void) const;
private:

	std::string _name;
	Weapon *_weapon;
};

#endif
