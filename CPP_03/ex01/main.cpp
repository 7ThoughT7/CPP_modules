#include "ScavTrap.hpp"

int main()
{
	ClapTrap zero("Bolodia");
	std::cout << zero << "\n";

	ScavTrap one("Oleg");
	std::cout << "\n";

	ScavTrap two(one);
	std::cout << two << "\n";
	std::cout << "\n";

	ScavTrap three("Andrey");
	std::cout << "\n";

	three.attack("Pasha");
	two.takeDamage(5);
	one.attack("Iiigor");
	one.guardGate();
	std::cout << "\n";

	return (0);
}