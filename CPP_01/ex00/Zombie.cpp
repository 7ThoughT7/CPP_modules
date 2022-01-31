#include "Zombie.hpp"

void	Zombie::anounce()
{
	std::cout << "<\x1b[32m" << this->name << "\x1b[0m> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string &name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << "<\x1b[32m" << this->name << "\x1b[0m> ";
	std::cout << "Ooh, you killed me" << std::endl;
}