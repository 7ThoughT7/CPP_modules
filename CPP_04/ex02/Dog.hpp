#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain *DogBrain;

public:
	Dog( void );
	virtual ~Dog( void );

	Dog(const Dog &clas);
	Dog &operator=(const Dog &clas);

	virtual void makeSound() const;
};

#endif //DOG_HPP
