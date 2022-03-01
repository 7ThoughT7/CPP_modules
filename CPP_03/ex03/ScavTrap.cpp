#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << "Default constructor called" << "\n";
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << "Destructor called " << this->_Name << "\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << "Constructor called " << name << "\n";
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &clas) : ClapTrap(clas._Name)
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << "Copy constructor called" << "\n";
	(*this) = clas;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &clas)
{
	this->_Name = clas._Name;
	this->_Hitpoints = clas._Hitpoints;
	this->_Energy_points = clas._Energy_points;
	this->_Attack_damage = clas._Attack_damage;
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << this->_Name << " attack " << target << \
	", causing " << this->_Attack_damage << " points of damage!" << "\n";
}

void ScavTrap::guardGate()
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << _Name << " have enterred in Gate keeper mode." << "\n";
}
