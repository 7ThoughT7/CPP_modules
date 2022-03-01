#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(std::string name);

	ScavTrap(ScavTrap &clas);
	ScavTrap &operator=(ScavTrap &clas);

	void guardGate(void);
	void attack(std::string const &target);
};

std::ostream &operator<<(std::ostream &out, ScavTrap const &clas);

#endif //SCAVTRAP_HPP
