#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string name);

	FragTrap(FragTrap &clas);
	FragTrap &operator=(FragTrap &clas);

	void highFivesGuys(void);
	void attack(std::string const &target);
};

std::ostream &operator<<(std::ostream &out, FragTrap const &clas);


#endif //FRAGTRAP_HPP
