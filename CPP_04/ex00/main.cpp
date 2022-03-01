#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void)
{
	std::cout << "_________________________" << std::endl;
	std::cout << "______Correct test_______" << std::endl;
	std::cout << "_________________________" << std::endl;
	const Animal* meta = new Animal();
	std::cout << "\033[32m" << "Type:\t\t" << "\033[0m" << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* j = new Dog();
	std::cout << "\033[32m" << "Type:\t\t" << "\033[0m" << j->getType() << std::endl;
	j->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* i = new Cat();
	std::cout << "\033[32m" << "Type:\t\t" << "\033[0m" << i->getType() << std::endl;
	i->makeSound();
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Wrong test________" << std::endl;
	std::cout << "_________________________" << std::endl;
	const WrongAnimal* meta_wrong = new WrongAnimal();
	std::cout << "\033[32m" << "Type:\t\t" << "\033[0m" << meta_wrong->getType() << std::endl;;
	meta_wrong->makeSound();
	std::cout << "_________________________" << std::endl;
	const WrongCat* cat = new WrongCat();
	std::cout << "\033[32m" << "Type:\t\t" << "\033[0m" << cat->getType() << std::endl;;
	cat->makeSound();
	std::cout << "_________________________" << std::endl;
	const WrongAnimal* i_wrong = new WrongCat();
	std::cout << "\033[32m" << "Type:\t\t" << "\033[0m" << i_wrong->getType() << std::endl;
	i_wrong->makeSound();
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Destructed_________" << std::endl;
	std::cout << "_________________________" << std::endl;
	delete meta;
	delete i;
	delete cat;
	delete j;
	delete meta_wrong;
	delete i_wrong;

	return (0);
}