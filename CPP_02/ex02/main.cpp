#include "Fixed.hpp"

int main( void )
{
	{
		std::cout << "________________" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << "________________" << std::endl;
	}
	{
		Fixed		a , b, c;
		bool		t = true;
		const int 	a_const = 42;
		const int 	b_const = 21;
		float		a_float = 42.42;
		float		b_float = 21.71;
		float		c_float = 0.0;
		//--------------------------------
		std::cout << "Test {=}" << std::endl;
		a = 42;
		b = 21;
		c = 42;
		std::cout << "a= " << a << std::endl;
		std::cout << "b= " << b << std::endl;
		std::cout << "c= " << c << std::endl;
		//--------------------------------
		std::cout << "Test {!=}" << std::endl;
		t = a!=b;
		std::cout << "a!=b  -->" << t << std::endl;
		t = a!=c;
		std::cout << "a!=c  -->" << t << std::endl;
		//--------------------------------
		std::cout << "Test {==}" << std::endl;
		t = a==b;
		std::cout << "a==b  -->" << t << std::endl;
		t = a==c;
		std::cout << "a==c  -->" << t << std::endl;
		//--------------------------------
		std::cout << "Test {>=}" << std::endl;
		t = a>=b;
		std::cout << "a>=b  -->" << t << std::endl;
		t = a>=c;
		std::cout << "a>=c  -->" << t << std::endl;
		//--------------------------------
		std::cout << "Test {<=}" << std::endl;
		t = a<=b;
		std::cout << "a<=b  -->" << t << std::endl;
		t = a<=c;
		std::cout << "a<=c  -->" << t << std::endl;
		//--------------------------------
		std::cout << "Test {<}" << std::endl;
		t = a<b;
		std::cout << "a<b  -->" << t << std::endl;
		t = a<c;
		std::cout << "a<c  -->" << t << std::endl;
		//--------------------------------
		std::cout << "Test {>}" << std::endl;
		t = a>b;
		std::cout << "a>b  -->" << t << std::endl;
		t = a>c;
		std::cout << "a>c  -->" << t << std::endl;
		//--------------------------------
		std::cout << "Test {+ binary}" << std::endl;
		c = a + b;
		std::cout << "c=a+b  -->" << c << std::endl;
		//--------------------------------
		std::cout << "Test {+ unary}" << std::endl;
		c = +a;
		std::cout << "c=+a  -->" << c << std::endl;
		//--------------------------------
		std::cout << "Test {- binary}" << std::endl;
		c = a - b;
		std::cout << "c=a-b  -->" << c << std::endl;
		//--------------------------------
		std::cout << "Test {- unary}" << std::endl;
		c = -a;
		std::cout << "c=-a  -->" << c << std::endl;
		//--------------------------------
		std::cout << "Test {*}" << std::endl;
		c = a * b;
		std::cout << "c=a*b  -->" << c << std::endl;
		c_float = a_float * b_float;
		std::cout << "c_float=a_float*b_float  -->" << c_float << std::endl;
		//--------------------------------
		std::cout << "Test {/}" << std::endl;
		c = a / b;
		std::cout << "c=a/b  -->" << c << std::endl;
		c_float = a_float / b_float;
		std::cout << "c_float=a_float/b_float  -->" << c_float << std::endl;
		//--------------------------------
		std::cout << "Test {++ prefix}" << std::endl;
		std::cout << "++a  -->" << ++a << std::endl;
		a = 42;
		//--------------------------------
		std::cout << "Test {++ postfix}" << std::endl;
		std::cout << "a++  -->" << a++ << std::endl;
		a = 42;
		//--------------------------------
		std::cout << "Test {-- prefix}" << std::endl;
		std::cout << "--a  -->" << --a << std::endl;
		a = 42;
		//--------------------------------
		std::cout << "Test {-- postfix}" << std::endl;
		std::cout << "a--  -->" << a-- << std::endl;
		a = 42;
		//--------------------------------
		std::cout << "Test {max}" << std::endl;
		c = Fixed::max(a, b);
		std::cout << "c=max(a, b) -->" << c << std::endl;
		//--------------------------------
		std::cout << "Test {max const}" << std::endl;
		c = Fixed::max(a_const, b_const);
		std::cout << "c=max(a, b) -->" << c << std::endl;
		//--------------------------------
		std::cout << "Test {min}" << std::endl;
		// std::cout << "a_const= " << a_const << std::endl;
		// std::cout << "b_const= " << b_const << std::endl;
		c = Fixed::min(a, b);
		std::cout << "c=min(a, b) -->" << c << std::endl;
		//--------------------------------
		std::cout << "Test {min const}" << std::endl;
		// std::cout << "a_const= " << a_const << std::endl;
		// std::cout << "b_const= " << b_const << std::endl;
		c = Fixed::min(a_const, b_const);
		std::cout << "c=min(a, b) -->" << c << std::endl;
		//--------------------------------
		std::cout << "Test {max/min method}" << std::endl;
		std::cout << "a.max(a, b) -->" << a.max(a, b) << " | a.min(a, b) -->" << a.min(a, b) << std::endl;
		std::cout << "b.max(a, b) -->" << b.max(a, b) << " | b.min(a, b) -->" << a.min(a, b) << std::endl;
		std::cout << "c.max(a, b) -->" << c.max(a, b) << " | c.min(a, b) -->" << a.min(a, b) << std::endl;
		//--------------------------------
	}

	return (0);
}