/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:07:35 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/31 11:32:19 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BCYAN "\033[1;36m"
#include <string>
#include <iostream>

class Base {public :virtual ~Base(){}};
	class A : public Base{public:~A(){}};
	class B : public Base{public:~B(){}};
	class C : public Base{public:~C(){}};


Base * generate(void)
{
	srand(time(NULL));
	std::cout <<BGREEN<< "generated: "<<BYELLOW;
	switch (rand() % 3)
	{
	case 0:
		std::cout << "A"<<std::endl;
		return new A();
	case 1:
		std::cout << "B"<<std::endl;
		return new B();
	case 2:
		std::cout << "C"<<std::endl;
		return new C();
	default:
		return NULL;
	}

}
void identify(Base* p)
{
	std::cout << BGREEN<<"Identification par pointeur: "<<BYELLOW;
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base res;
	std::cout << BGREEN<< "Identification par reference: "<<BYELLOW;
	try {
		res = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;}
	catch (std::exception & e) {}

	try {
		res = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;}
	catch (std::exception & e) {}

	try {
		res = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;}
	catch (std::exception & e) {}
}

int main()
{
	Base *p;
	p = generate();
	identify(p);
	identify(*p);
}
