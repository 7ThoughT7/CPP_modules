#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "<\x1b[32m" << "FragTrap" << "\x1b[0m>\t" << "Default constructor called" << "\n";
	this->_Hitpoints = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "<\x1b[32m" << "FragTrap" << "\x1b[0m>\t" << "Destructor called" << "\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "<\x1b[32m" << "FragTrap" << "\x1b[0m>\t" << "Constructor called " << name << "\n";
	this->_Hitpoints = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &clas) : ClapTrap(clas._Name)
{
	std::cout << "<\x1b[32m" << "FragTrap" << "\x1b[0m>\t" << "Copy constructor called" << "\n";
	(*this) = clas;
}

FragTrap &FragTrap::operator=(FragTrap const &clas)
{
	this->_Name = clas._Name;
	this->_Hitpoints = clas._Hitpoints;
	this->_Energy_points = clas._Energy_points;
	this->_Attack_damage = clas._Attack_damage;
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