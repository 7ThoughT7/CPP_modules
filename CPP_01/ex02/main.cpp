#include <iostream>

int main( void )
{
	std::string str = "Hi this is brain";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of \x1b[36mmain\x1b[0m string:       " << &str << std::endl;
	std::cout << "Address of \x1b[33mpointer\x1b[0m string:    " << stringPTR << std::endl;
	std::cout << "Address of \x1b[32mreference\x1b[0m string:  " << &stringREF << std::endl;
	std::cout << "\x1b[36mPointer\x1b[0m on string:            " << *stringPTR << std::endl;
	std::cout << "\x1b[33mReference\x1b[0m on string:          " << stringREF << std::endl;

	return 0;
}