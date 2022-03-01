#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>

class WrongAnimal
{
protected:
	std::string _type;
	WrongAnimal(std::string const &type);

public:
	WrongAnimal( void );
	virtual ~WrongAnimal( void );
	WrongAnimal(const WrongAnimal &clas);

	WrongAnimal &operator=(const WrongAnimal &clas);

	void makeSound( void ) const;
	std::string const &getType( void ) const;
};


#endif //WRONGANIMAL_HPP
