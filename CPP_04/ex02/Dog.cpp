#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), DogBrain(new Brain())
{
	std::cout << "<\x1b[32m" << "Dog" << "\x1b[0m>\t\t" << "Default constructor called " << "\n";
}

Dog::~Dog()
{
	std::cout << "<\x1b[32m" << "Dog" << "\x1b[0m>\t\t" << "Destructor called " << "\n";
	delete this->DogBrain;
}

Dog::Dog(const Dog &clas)
{
	std::cout << "<\x1b[32m" << "Dog" << "\x1b[0m>\t\t" << "Constructor copy" << "\n";
	(*this) = clas;
}

Dog &Dog::operator=(const Dog &clas)
{
	std::cout << "<\x1b[32m" << "Dog" << "\x1b[0m>\t\t" << "Operator[=]" << "\n";
	this->_type = clas._type;
	delete DogBrain;
	this->DogBrain = new Brain(*clas.DogBrain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "<\x1b[32m" << "Sound" << "\x1b[0m>\t\t" << "Guf guf" << "\n";
}
