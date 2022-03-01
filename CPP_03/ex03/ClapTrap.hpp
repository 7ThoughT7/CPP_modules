#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap
{
protected:
	std::string _Name;
	int _Hitpoints;
	int _Energy_points;
	int _Attack_damage;

public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &clas);

	ClapTrap &operator=(ClapTrap const &clas);

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif //CLAPTRAP_HPP
