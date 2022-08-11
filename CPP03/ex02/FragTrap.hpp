#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap();
	FragTrap& operator=(const FragTrap &rhs);

	void highFivesGuys(void);
	void attack(const std::string &target);
};

#endif
