#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Default constructor called " << "\n";
	this->_Name = "(noname)";
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Destructor called " << this->_Name << "\n";
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Constructor called " << name << "\n";
	this->_Name = name;
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &clas)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Constructor copy" << "\n";
	(*this) = clas;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clas)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Operator[=]" << "\n";
	this->_Name = clas._Name;
	this->_Hitpoints = clas._Hitpoints;
	this->_Energy_points = clas._Energy_points;
	this->_Attack_damage = clas._Attack_damage;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << this->_Name << " attack " << target << \
	", causing " << this->_Attack_damage << " points of damage!" << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\x1b[35m" << this->_Name << " take " << amount << " damage" << "\x1b[0m\t" << "\n";
	this->_Hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "<\x1b[32m" << this->_Name << "\x1b[0m>\t\t" << "repaired " << amount << "\n";
	this->_Hitpoints += amount;
}
