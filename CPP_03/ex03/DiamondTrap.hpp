#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _Name;

public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(std::string name);

	DiamondTrap(DiamondTrap const &clas);
	DiamondTrap &operator=(DiamondTrap const &clas);

	void whoAmI(void);
	void attack(std::string const &target);
};

#endif //DIAMONDTRAP_HPP
