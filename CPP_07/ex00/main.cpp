#include <iostream>
#include "whatever.hpp"

int main() {
	int a = 8;
	int b = 3;
    std::cout << "a = " << a << ", b = " << b << "\n";
	::swap( a, b );
    std::cout << "swap( a, b ) : a = " << a  << ", b = " << b << "\n";
	std::cout << "min( a, b ) = " << ::min( a, b ) << "\n";
	std::cout << "max( a, b ) = " << ::max( a, b ) << "\n";

    std::cout << "---------------------------------------" <<"\n";
	std::string c = "chf1";
	std::string d = "cha2";
    std::cout << "c = " << c << ", d = " << d << "\n";
	::swap(c, d);
    std::cout << "swap( c, d ) : c = " << c  << ", d = " << d << "\n";
	std::cout << "min( c, d ) = " << ::min( c, d ) << "\n";
	std::cout << "max( c, d ) = " << ::max( c, d ) << "\n";


	return 0;
}


