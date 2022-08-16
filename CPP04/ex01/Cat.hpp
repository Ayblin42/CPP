/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:25:49 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 22:30:09 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string name);
	virtual ~Cat();
	Cat (const Cat&other);
	Cat &operator=(const Cat&rhs);

	void makeSound() const;
private:
	Brain *_brain;
};

#endif
