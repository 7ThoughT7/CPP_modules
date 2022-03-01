#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _c;
		static const int _bit = 8;

	public:
		Fixed();
		Fixed(int const c);
		Fixed(float const c);
		Fixed(Fixed const &sec);
		Fixed &operator=(Fixed const &sec);
		~Fixed();

		int toInt() const;
		float toFloat() const;
		int getRawBits() const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &cout, Fixed const &clas);
#endif