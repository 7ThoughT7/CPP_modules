#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);
void bsp_print(bool f);

int main( void )
{
	Point a(1, 1), b(4, 1), c(4,5);

	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";
	std::cout << "c: " << c << "\n";

	std::cout << "_________________" << "\n";
	Point d(3, 2);
	bsp_print(bsp(a, b, c, d));

	std::cout << "_________________" << "\n";
	Point s(1, 7);
	bsp_print(bsp(a, b, c, s));

	std::cout << "_________________" << "\n";
	Point f(4,4);
	bsp_print(bsp(a, b, c, f));
}
