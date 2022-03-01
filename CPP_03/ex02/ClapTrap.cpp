#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("noname"), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Default constructor called " << "\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Destructor called " << this->_Name << "\n";
}

ClapTrap::ClapTrap(std::string name): _Name(name), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Constructor called " << name << "\n";
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int damage): _Name(name), _Hitpoints(hit),
			_Energy_points(energy), _Attack_damage(damage)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Constructor called " << name << "\n";
}

ClapTrap::ClapTrap(const ClapTrap &clas)
{
	std::cout << "<\x1b[32m" << "ClapTrap" << "\x1b[0m>\t" << "Constructor copy" << "\n";
	*this = clas;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clas)
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

std::string ClapTrap::getName() const
{
	return (this->_Name);
}

int ClapTrap::getHit() const
{
	return (this->_Hitpoints);
}

int ClapTrap::getEnergy() const
{
	return (this->_Energy_points);
}

int ClapTrap::getDamage() const
{
	return (this->_Attack_damage);
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &clas)
{
	out << "<\x1b[32m" << clas.getName() << "\x1b[0m>\t" << clas.getHit() << " " << \
	clas.getEnergy() << " " << clas.getDamage() << "\n";
	return out;
}