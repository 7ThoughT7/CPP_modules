#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("noname", 100, 50, 20)
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << "Default constructor called" << "\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << "Destructor called " << this->_Name << "\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << "Constructor called " << name << "\n";
}

ScavTrap::ScavTrap(ScavTrap &clas)
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << "Copy constructor called" << "\n";
	(*this) = clas;
}

ScavTrap &ScavTrap::operator=(ScavTrap &clas)
{
	this->_Name = clas.getName();
	this->_Hitpoints = clas.getHit();
	this->_Energy_points = clas.getEnergy();
	this->_Attack_damage = clas.getDamage();
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << this->_Name << " attack " << target << \
	", causing " << this->_Attack_damage << " points of damage!" << "\n";
}

void ScavTrap::guardGate()
{
	std::cout << "<\x1b[32m" << "ScavTrap" << "\x1b[0m>\t" << _Name << " have enterred in Gate keeper mode." << "\n";
}

std::ostream &operator<<(std::ostream &out, ScavTrap const &clas)
{
	out << "<\x1b[32m" << clas.getName() << "\x1b[0m>\t\t" << clas.getHit() << " " << clas.getEnergy() << " " << clas.getDamage();
	return (out);
}
