#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
	std::string	test;
	std::cout << "_________________________" << std::endl;
	std::cout << "___________Test__________" << std::endl;
	std::cout << "_________________________" << std::endl;
	const Animal* j = new Dog();
	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* i = new Cat();
	std::cout << i->getType() << std::endl;
	i->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* j_copy = new Dog(*(Dog*)j);
	std::cout << j_copy->getType() << std::endl;
	j_copy->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* i_copy = new Cat(*(Cat*)j);
	std::cout << i_copy->getType() << std::endl;
	i_copy->makeSound();
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Destructed________" << std::endl;
	std::cout << "_________________________" << std::endl;
	delete j;
	delete i;
	delete j_copy;
	delete i_copy;

	return (0);
}