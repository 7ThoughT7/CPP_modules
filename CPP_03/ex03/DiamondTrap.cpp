#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "<\x1b[32m" << "DiamondTrap" << "\x1b[0m>\t" << "Default constructor called " << "\n";
	ClapTrap::_Name = _Name + "_clap_name";
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "<\x1b[32m" << "DiamondTrap" << "\x1b[0m>\t" << "Destructor called " << this->_Name << "\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "<\x1b[32m" << "DiamondTrap" << "\x1b[0m>\t" << "Constructor called " << "\n";
	ClapTrap::_Name = name + "_clap_name";
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &clas) : ClapTrap(clas.ClapTrap::_Name), ScavTrap(clas.ScavTrap::_Name), FragTrap(clas.FragTrap::_Name)
{
	std::cout << "<\x1b[32m" << "DiamondTrap" << "\x1b[0m>\t" << "Copy constructor called" << "\n";
	(*this) = clas;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &clas)
{
	std::cout << "DiamondTrap operator[=]" << "\n";
	this->_Name = clas._Name;
	this->_Hitpoints = clas._Hitpoints;
	this->_Energy_points = clas._Energy_points;
	this->_Attack_damage = clas._Attack_damage;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_Name << " from Diamond" << "\n";
	std::cout << "I am " << this->ClapTrap::_Name << " from Clap" << "\n";
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
