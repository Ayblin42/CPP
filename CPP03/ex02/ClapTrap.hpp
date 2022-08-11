#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>


# define NRM  "\x1B[0m"
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT  "\x1B[37m"


class ClapTrap
{
public:

	//Constructeur / Destructeur
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap (const ClapTrap&other);
	ClapTrap &operator=(const ClapTrap&rhs);

	//Getters
	std::string get_Name( void ) const;
	int get_Pdv( void ) const;
	int get_Mana( void ) const;
	int get_AD( void ) const;
	// Setters
	void set_Name(std::string const _Name);
	void set_Pdv( int const _Pdv);
	void set_Mana( int const _Mana );
	void set_AD( int const _AD );
	// functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:

	std::string _Name;
	int			_Pdv;
	int			_Mana;
	int			_AD;
};


#endif
