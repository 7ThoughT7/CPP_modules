#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "<\x1b[32m" << "Cat" << "\x1b[0m>\t\t" << "Default constructor called " << "\n";
}

Cat::~Cat()
{
	std::cout << "<\x1b[32m" << "Cat" << "\x1b[0m>\t\t" << "Destructor called " << "\n";
}

Cat::Cat(const Cat &clas)
{
	std::cout << "<\x1b[32m" << "Cat" << "\x1b[0m>\t" << "Constructor copy" << "\n";
	(*this) = clas;
}

Cat &Cat::operator=(const Cat &clas)
{
	std::cout << "<\x1b[32m" << "Cat" << "\x1b[0m>\t" << "Operator[=]" << "\n";
	this->_type = clas._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "<\x1b[32m" << "Sound" << "\x1b[0m>\t\t" << "Miau miau" << "\n";

}