#include "Point.hpp"

Point::Point()
{
	this->_x = 0;
	this->_y = 0;
}

Point::~Point() {}

Point::Point(const Point &clas)
{
	this->_x = clas.getRawBits_x();
	this->_y = clas.getRawBits_y();
}

Fixed Point::getRawBits_x() const
{
	return this->_x;
}

Fixed Point::getRawBits_y() const
{
	return this->_y;
}

Point &Point::operator=(const Point &clas)
{
	this->_x = clas.getRawBits_x();
	this->_y = clas.getRawBits_y();
	return (*this);
}

std::ostream &operator<<(std::ostream &cout, Point const &clas)
{
	cout << "(" << clas.getRawBits_x().toFloat() << "," << clas.getRawBits_y().toFloat() << ")";
	return cout;
}

Point::Point(const int x, const int y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::Point(const int x, const float y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::Point(const float x, const int y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::Point(const float x, const float y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}
