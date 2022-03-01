#include <iostream>
#include "span.hpp"

int main ()
{
    std::cout << "------//5 numbers//------" << "\n";
    span sp = span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortestSpan: " << sp.shortestSpan() << "\n";
    std::cout << "longestSpan: " << sp.longestSpan() << "\n";

    std::cout << "------//100000 numbers//------" << "\n";
    std::srand(std::time(nullptr));
    span spn = span(100000);
    for(int i = 0; i < 100000; i++)
        spn.addNumber(std::rand() % 100);

    std::cout << "shortestSpan: " << spn.shortestSpan() << "\n";
    std::cout << "longestSpan: " << spn.longestSpan() << "\n";

    try
    {
        span sp(3);
        sp.addNumber(4);
        sp.addNumber(4);
        sp.addNumber(4);
        sp.addNumber(4);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }
	
    try
    {
        span sp(3);
        sp.addNumber(4);
        std::cout << sp.shortestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }
	
	return 0;
}

