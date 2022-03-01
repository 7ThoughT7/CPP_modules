#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	virtual ~WrongCat( void );
	WrongCat(const WrongCat &clas);

	virtual void makeSound( void ) const;

	WrongCat &operator=(const WrongCat &clas);
};

#endif //WRONGCAT_HPP
