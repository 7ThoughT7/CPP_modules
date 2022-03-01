#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "<\x1b[32m" << "WrongAnimal" << "\x1b[0m>\t" << "Default constructor called " << "\n";
	this->_type = "Wrong Animal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "<\x1b[32m" << "WrongAnimal" << "\x1b[0m>\t" << "Destructor called " << "\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &clas)
{
	std::cout << "<\x1b[32m" << "WrongAnimal" << "\x1b[0m>\t" << "Constructor copy" << "\n";
	(*this) = clas;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &clas)
{
	std::cout << "<\x1b[32m" << "WrongAnimal" << "\x1b[0m>\t" << "Operator[=]" << "\n";
	this->_type = clas._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "<\x1b[32m" << "Sound" << "\x1b[0m>\t\t" << "Ga Kria Guf Meow" << "\n";
}

std::string const &WrongAnimal::getType() const
{
	return (this->_type);
}

WrongAnimal::WrongAnimal(const std::string &type)
{
	std::cout << "<\x1b[32m" << "WrongAnimal" << "\x1b[0m>\t" << "Constructor called " << type << "\n";
	this->_type = type;
}