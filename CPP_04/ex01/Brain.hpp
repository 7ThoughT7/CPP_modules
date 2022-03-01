#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string _idea[100];

public:
	Brain( void );
	~Brain( void );
	Brain(const Brain &clas);

	Brain &operator=(const Brain &clas);
};


#endif //BRAIN_HPP
