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

Fixed::Fixed(int const c)
{
	std::cout << "Int constructor called" << "\n";
	this->_c = (c << Fixed::_bit);
}

Fixed::Fixed(float const c)
{
	std::cout << "Float constructor called" << "\n";
	this->_c = roundf(c * (1 << Fixed::_bit));  //
}

Fixed &Fixed::operator=(Fixed const &sec)
{
	std::cout << "Assignation operator called" << "\n";
	this->_c = sec.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &cout, Fixed const &clas)
{
	cout << clas.toFloat();
	return cout;
}

int Fixed::toInt() const
{
	return (this->_c >> Fixed::_bit);
}

float Fixed::toFloat() const
{
	return ((float)this->_c / (float)(1 << Fixed::_bit));
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << "\n";
	return this->_c;
}

void Fixed::setRawBits(int const raw)
{
	this->_c = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << "\n";
}