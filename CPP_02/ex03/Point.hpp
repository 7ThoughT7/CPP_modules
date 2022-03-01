#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed _x;
	Fixed _y;
	static const int _d;
public:
	Point();
	~Point();
	Point(Point const &clas);

	Fixed getRawBits_x(void) const;
	Fixed getRawBits_y(void) const;

	Point &operator=(Point const &clas);

	Point(int const x, int const y);
	Point(int const x, float const y);
	Point(float const x, int const y);
	Point(float const x, float const y);
};

std::ostream &operator<<(std::ostream &cout, Point const &clas);

#endif //POINT_HPP
