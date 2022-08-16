/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:07 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 14:13:22 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string name);
	~Animal();
	Animal (const Animal&other);
	Animal &operator=(const Animal&rhs);

	std::string getType() const;
	virtual void makeSound() const;
protected:
	std::string _type;

};

#endif
