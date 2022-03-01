#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

class Fixed
{
private:
	int _c;
	static const int _bit = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(int const sec);
	Fixed(float const sec);
	Fixed(Fixed const &sec);

	int getRawBits(void) const;
	void setRawBits(int const f);

	int toInt(void) const;
	float toFloat(void) const;

	Fixed &operator=(Fixed const &sec);

	// comparison operators
	bool operator==(Fixed const &sec) const;
	bool operator!=(Fixed const &sec) const;
	bool operator<(Fixed const &sec) const;
	bool operator>(Fixed const &sec) const;
	bool operator<=(Fixed const &sec) const;
	bool operator>=(Fixed const &sec) const;

	//arithmetic operators
	Fixed operator+(Fixed const &sec);
	Fixed operator+(void);
	Fixed operator-(Fixed const &sec);
	Fixed operator-(void);
	Fixed operator*(Fixed const &sec);
	Fixed operator/(Fixed const &sec);

	//increment, decrement
	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	static Fixed		&max(Fixed &x, Fixed &y);
	static Fixed		&min(Fixed &x, Fixed &y);
	static Fixed const	&max(Fixed const &x, Fixed const &y);
	static Fixed const	&min(Fixed const &x, Fixed const &y);
};

std::ostream &operator<<(std::ostream &out, Fixed const &sec);

#endif //FIXED_HPP
