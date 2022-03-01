#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "<\x1b[32m" << "WrongCat" << "\x1b[0m>\t" << "Default constructor called " << "\n";
}

WrongCat::~WrongCat()
{
	std::cout << "<\x1b[32m" << "WrongCat" << "\x1b[0m>\t" << "Destructor called " << "\n";
}

WrongCat::WrongCat(const WrongCat &clas)
{
	std::cout << "<\x1b[32m" << "WrongCat" << "\x1b[0m>\t" << "Constructor copy" << "\n";
	(*this) = clas;
}

void WrongCat::makeSound() const
{
	std::cout << "<\x1b[32m" << "Sound" << "\x1b[0m>\t\t" << "Meow meow" << "\n";
}

WrongCat &WrongCat::operator=(const WrongCat &clas)
{
	std::cout << "<\x1b[32m" << "WrongCat" << "\x1b[0m>\t" << "Operator[=]" << "\n";
	this->_type = clas._type;
	return (*this);
}