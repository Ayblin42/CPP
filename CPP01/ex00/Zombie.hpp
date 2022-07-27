/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:36:31 by ayblin            #+#    #+#             */
/*   Updated: 2022/07/27 16:12:46 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <cstring>
# include <algorithm>
# include <iomanip>
# include <stdlib.h>

# define NRM  "\x1B[0m"
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT  "\x1B[37m"

class Zombie
{
public:

	Zombie(std::string name);
	~Zombie();
	// Getters
	void announce( void ) const;

private:

		std::string _name;

};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
