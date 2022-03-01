#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _c;
		static const int _bit = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &sec);
		Fixed &operator=(Fixed const &sec);

		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif