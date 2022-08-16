/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:00 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 22:42:37 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H


#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public  Animal
{
public:
	Dog();
	Dog(std::string name);
	virtual ~Dog();
	Dog (const Dog&other);
	Dog &operator=(const Dog&rhs);

	void makeSound() const;

private:
	Brain *_brain;
};

#endif
