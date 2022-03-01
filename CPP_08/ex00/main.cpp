#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main ()
{
	std::vector<int> l;
	std::vector<int>::iterator it;

	l.insert(l.begin(), 4);
	l.insert(l.begin(), 4);
	l.insert(l.begin(), 4);
	l.insert(l.begin(), 6);
	l.insert(l.begin(), 5);

	it = easyfind(l, 4);

	if (it != l.end())
		std::cout << *it << "\n";
	else
		std::cout << "Number not found" << "\n";

	std::cout << "------------" << "\n";

	while(it != l.end())
	{
		std::cout << *it << "\n";
		it++;
	}

	return (0);
}

