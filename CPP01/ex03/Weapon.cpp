/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:52:17 by ayblin            #+#    #+#             */
/*   Updated: 2022/07/30 12:59:20 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	Weapon()
{

}

void	~Weapon()
{

}

std::string	&stgetType() const
{
	std::string	&ref = this->type;
	return (ref);
}

void	setType(std::string str)
{
	this->type = str;
}
