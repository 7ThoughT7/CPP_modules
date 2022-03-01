#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << "\n";
	this->_c = 0;
}

Fixed::Fixed(Fixed const &sec)
{
	std::cout << "Copy constructor called" << "\n";
	this->_c = sec.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << "\n";
}

Fixed &Fixed::operator=(Fixed const &sec)
{
	std::cout << "Assignation operator called" << "\n";
	this->_c = sec.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << "\n";
	return this->_c;
}

void Fixed::setRawBits(const int raw)
{
	this->_c = raw;
}