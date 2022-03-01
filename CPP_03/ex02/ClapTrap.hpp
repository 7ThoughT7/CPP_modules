#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

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
	ClapTrap(std::string name, int hit, int energy, int damage);
	ClapTrap(ClapTrap const &clas);

	ClapTrap &operator=(ClapTrap const &clas);



	std::string getName(void) const;
	int 		getHit(void) const;
	int 		getEnergy(void) const;
	int 		getDamage(void) const;

	virtual	void attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &out, ClapTrap const &clas);


#endif //CLAPTRAP_HPP
