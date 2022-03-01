#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	virtual ~Cat( void );

	Cat(const Cat &clas);
	Cat &operator=(const Cat &clas);

	virtual void makeSound( void ) const;
};


#endif //CAT_HPP
