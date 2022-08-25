/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:07 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 22:21:29 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# define NRM  "\x1B[0m"
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT  "\x1B[37m"

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string name);
	virtual ~Animal();
	Animal (const Animal&other);
	Animal &operator=(const Animal&rhs);

	std::string getType() const;
	virtual void makeSound() const = 0;
protected:
	std::string _type;

};

#endif
