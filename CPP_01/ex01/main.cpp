#include "Zombie.hpp"

#define ZOMBIE_HORDE 5

Zombie *ZombieHorde(int N, std::string name);

int main( void )
{
	Zombie *zombies = ZombieHorde(ZOMBIE_HORDE, "Boba");
	for (int i = 0; i < ZOMBIE_HORDE; ++i)
		zombies[i].announce();
	delete [] zombies;
	zombies = ZombieHorde(ZOMBIE_HORDE, "Biba");
	for (int i = 0; i < ZOMBIE_HORDE; ++i)
		zombies[i].announce();
	delete [] zombies;
	return 0;
}