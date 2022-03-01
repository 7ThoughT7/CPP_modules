#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "<\x1b[32m" << "Animal" << "\x1b[0m>\t" << "Default constructor called " << "\n";
	this->_type = "Animal";
}

Animal::~Animal()
{
	std::cout << "<\x1b[32m" << "Animal" << "\x1b[0m>\t" << "Destructor called " << "\n";
}

Animal::Animal(std::string const &type)
{
	std::cout << "<\x1b[32m" << "Animal" << "\x1b[0m>\t" << "Constructor called " << type << "\n";
	this->_type = type;
}

Animal &Animal::operator=(const Animal &clas)
{
	std::cout << "<\x1b[32m" << "Animal" << "\x1b[0m>\t" << "Operator[=]" << "\n";
	this->_type = clas._type;
	return (*this);
}

Animal::Animal(const Animal &clas)
{
	std::cout << "<\x1b[32m" << "Animal" << "\x1b[0m>\t" << "Constructor copy" << "\n";
	(*this) = clas;
}

std::string const &Animal::getType() const
{
	return (this->_type);
}