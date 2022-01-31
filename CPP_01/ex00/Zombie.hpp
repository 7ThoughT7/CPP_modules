#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
	std::string name;
public:
	void	anounce();
	Zombie(std::string const &);
	~Zombie();
};

#endif