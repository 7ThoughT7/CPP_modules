#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "<\x1b[32m" << "Brain" << "\x1b[0m>\t\t" << "Default constructor called " << "\n";
}

Brain::~Brain()
{
	std::cout << "<\x1b[32m" << "Brain" << "\x1b[0m>\t\t" << "Destructor called " << "\n";
}

Brain::Brain(const Brain &clas)
{
	std::cout << "<\x1b[32m" << "Brain" << "\x1b[0m>\t" << "Constructor copy" << "\n";
	(*this) = clas;
}

Brain &Brain::operator=(const Brain &clas)
{
	std::cout << "<\x1b[32m" << "Brain" << "\x1b[0m>\t" << "Operator[=]" << "\n";
	for (int i = 0; i < 100; i++)
	{
		this->_idea[i] = clas._idea[i];
	}
	return (*this);
}