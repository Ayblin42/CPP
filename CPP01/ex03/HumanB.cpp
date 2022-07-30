/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:13:56 by ayblin            #+#    #+#             */
/*   Updated: 2022/07/30 16:19:03 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	HumanB::attack()
{
	std::cout<< this->_name <<attacks with their << this->weapon.type <<std::endl;
}
