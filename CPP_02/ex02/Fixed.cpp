#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_c = 0;
}

Fixed::~Fixed(void) {}

Fixed::Fixed(int const c)
{
	this->_c = (c << this->_bit);
}

Fixed::Fixed(float const c)
{
	this->_c = roundf(c * (1 << Fixed::_bit));
}

Fixed::Fixed(Fixed const &sec)
{
	this->_c = sec.getRawBits();
}

int Fixed::toInt() const
{
	return (this->_c >> this->_bit);
}

float Fixed::toFloat() const
{
	return ((float)this->_c / (float)(1 << this->_bit));
}

Fixed &Fixed::operator=(const Fixed &sec)
{
	this->_c = sec.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &cout, Fixed const &clas)
{
	cout << clas.toFloat();
	return cout;
}

bool Fixed::operator==(const Fixed &sec) const
{
	return (this->getRawBits() == sec.getRawBits());
}

bool Fixed::operator!=(const Fixed &sec) const
{
	return (this->getRawBits() != sec.getRawBits());
}

bool Fixed::operator<(const Fixed &sec) const
{
	return (this->getRawBits() < sec.getRawBits());
}

bool Fixed::operator>(const Fixed &sec) const
{
	return (this->getRawBits() > sec.getRawBits());
}

bool Fixed::operator<=(const Fixed &sec) const
{
	return (this->getRawBits() <= sec.getRawBits());
}

bool Fixed::operator>=(const Fixed &sec) const
{
	return (this->getRawBits() >= sec.getRawBits());
}

Fixed Fixed::operator+(const Fixed &sec)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() + sec.getRawBits());
	return val;
}

Fixed Fixed::operator+(void)
{
	return (*this);
}

Fixed Fixed::operator-(const Fixed &sec)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() - sec.getRawBits());
	return val;
}

Fixed Fixed::operator-(void)
{
	return ((*this) * (-1));
}

Fixed Fixed::operator*(const Fixed &sec)
{
	Fixed val(*this);

	val.setRawBits((this->getRawBits() * sec.getRawBits()) / (1 << Fixed::_bit));
	return val;
}

Fixed Fixed::operator/(const Fixed &sec)
{
	Fixed val(*this);

	val.setRawBits((this->getRawBits() / sec.getRawBits()) * (1 << Fixed::_bit));
	return val;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	operator++();
	return tmp;
}

Fixed Fixed::operator++()
{
	this->_c++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	operator--();
	return tmp;
}

Fixed Fixed::operator--()
{
	this->_c--;
	return (*this);
}

Fixed &Fixed::max(Fixed &x, Fixed &y)
{
	return (x > y ? x : y);
}

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
	return (x < y ? x : y);
}

Fixed const &Fixed::max(const Fixed &x, const Fixed &y)
{
	return (x > y ? x : y);
}

Fixed const &Fixed::min(const Fixed &x, const Fixed &y)
{
	return (x < y ? x : y);
}

int Fixed::getRawBits() const
{
	return this->_c;
}

void Fixed::setRawBits(const int f)
{
	this->_c = f;
}
