#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Brain.hpp"

class Animal
{
protected:
	std::string _type;
	Animal(std::string const &type);

public:
	Animal( void );
	virtual ~Animal( void );

	Animal &operator=(const Animal &clas);
	Animal(const Animal &clas);

	virtual void makeSound( void ) const = 0;
	std::string const &getType( void ) const;
};


#endif //ANIMAL_HPP
