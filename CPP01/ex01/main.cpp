/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:36:17 by ayblin            #+#    #+#             */
/*   Updated: 2022/07/27 16:13:17 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1("zombie1");
	zombie1.announce();
	Zombie *zombie2 = newZombie("zombie2");
	zombie2->announce();
	randomChump("zombie3");
	delete zombie2;
}
