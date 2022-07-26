/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:24:37 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 12:26:47 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Dracaufeu("Dracaufeu");
	ClapTrap Bulbizare("Bulbizare");
	ClapTrap Pikachu("Pikachu");

	Dracaufeu.attack("Roucool");
	Dracaufeu.attack("Bart");
	Dracaufeu.attack("Homer");
	Dracaufeu.takeDamage(5);
	Bulbizare.takeDamage(9);
	Bulbizare.takeDamage(10);
	Pikachu.beRepaired(10);
	Pikachu.takeDamage(19);
}
