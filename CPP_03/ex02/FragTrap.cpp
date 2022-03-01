#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("noname", 100, 100, 30)
{
	std::cout << "<\x1b[32m" << "FragTrap" << "\x1b[0m>\t" << "Default constructor called" << "\n";
}

FragTrap::~FragTrap()
{
	std::cout << "<\x1b[32m" << "FragTrap" << "\x1b[0m>\t" << "Destructor called" << "\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "<\x1b[32m" << "FragTrap" << "\x1b[0m>\t" << "Constructor called " << name << "\n";
}

FragTrap::FragTrap(FragTrap &clas)
{
	std::cout << "<\x1b[32m" << "FragTrap" << "\x1b[0m>\t" << "Copy constructor called" << "\n";
	(*this) = clas;
}

FragTrap &FragTrap::operator=(FragTrap &clas)
{
	this->_Name = clas.getName();
	this->_Hitpoints = clas.getHit();
	this->_Energy_points = clas.getEnergy();
	this->_Attack_damage = clas.getDamage();
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "\x1b[34m" << "High fives!" << "\x1b[0m\t" << "\n";
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "<\x1b[32m" << "FragTrap" << "\x1b[0m>\t" << this->_Name << " attack " << target << \
	", causing " << this->_Attack_damage << " points of damage!" << "\n";
}

std::ostream &operator<<(std::ostream &out, FragTrap const &clas)
{
	out << "<\x1b[32m" << clas.getName() << "\x1b[0m>\t\t" << clas.getHit() << " " << clas.getEnergy() << " " << clas.getDamage();
	return (out);
}