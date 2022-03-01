#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor" << "\n";
	this->_Name = "(no name)";
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
}

ClapTrap::~ClapTrap() {}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "constructor " << name << "\n";
	this->_Name = name;
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &clas)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "constructor copy" << "\n";
	*this = clas;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clas)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "operator[=]" << "\n";
	this->_Name = clas._Name;
	this->_Hitpoints = clas._Hitpoints;
	this->_Energy_points = clas._Energy_points;
	this->_Attack_damage = clas._Attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << this->_Name << " attack " << target << \
	", causing " << this->_Attack_damage << " points of damage!" << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "<\x1b[32m" << this->_Name << "\x1b[0m>\t\t" << "take " << amount << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "<\x1b[32m" << this->_Name << "\x1b[0m>\t\t" << "repaired " << amount << "\n";
}