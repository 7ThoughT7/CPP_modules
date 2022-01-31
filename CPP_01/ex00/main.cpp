#include "Zombie.hpp"

Zombie *newZombie(std::string name);
Zombie *randomChump(std::string name);

int main( void )
{
	Zombie *Boba = newZombie("Boba");
	Zombie *Biba = newZombie("Biba");
	Boba->anounce();
	Biba->anounce();
	randomChump("Lola");
	randomChump("Lala");
	delete Boba;
	delete Biba;
	return 0;
}