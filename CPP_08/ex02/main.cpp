#include <iostream>
#include "MutantStack.hpp"

int main ()
{
	MutantStack<int> k;
	MutantStack<int> l;

	k.push(4);
	k.push(3);
	k.push(2);
	k.push(1);

	l = k;

	l.push(10);
	for (MutantStack<int>::iterator it = k.begin(); it != k.end(); it++)
		std::cout << *it << "\n";
	std::cout << "--------------" << "\n";
	for (MutantStack<int>::iterator it = l.begin(); it != l.end(); it++)
		std::cout << *it << "\n";

	std::cout << "--------------" << "\n";

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << "\n";

	mstack.pop();
	std::cout << "--------------" << "\n";

	std::cout << mstack.size() << "\n";
	std::cout << "--------------" << "\n";

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << "\n";
		++it;
	}

	std::stack<int> s(mstack);
	return 0;
}

