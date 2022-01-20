#include "PhoneBook.hpp"

int main()
{
	std::string	str;
	PhoneBook	book;
	int			id = 0;

	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (true)
	{
		std::cout << "Enter the command: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << "Empty command" << std::endl;
			break;
		}
		if (str == "ADD")
		{
			id = book.AddContact(id);
			if (BOOK_SIZE == id)
				id = 0;
		}
		else if (str == "SEARCH")
			book.SearchContact();
		else if (str == "EXIT")
		{
			std::cout << "EXIT" << std::endl;
			break;
		}
	}
	return 0;
}