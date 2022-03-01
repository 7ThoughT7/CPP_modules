#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string name);

	FragTrap(FragTrap const &clas);
	FragTrap &operator=(FragTrap const &clas);

	void attack(std::string const &target);
	void highFivesGuys(void);
};

#endif //FRAGTRAP_HPP
