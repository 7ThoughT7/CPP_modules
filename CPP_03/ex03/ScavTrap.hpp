#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(std::string name);

	ScavTrap(ScavTrap const &clas);
	ScavTrap &operator=(ScavTrap const &clas);

	void guardGate(void);
	void attack(std::string const &target);
};

#endif //SCAVTRAP_HPP
