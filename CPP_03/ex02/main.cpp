#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap one("Oleg");
	std::cout << std::endl;
	FragTrap two("Andrey");
	std::cout << std::endl;

	two.highFivesGuys();
	two.attack("Pasha");
	two.takeDamage(5);
	one.attack("Bolodia");
	one.guardGate();
	std::cout << std::endl;

	return (0);
}