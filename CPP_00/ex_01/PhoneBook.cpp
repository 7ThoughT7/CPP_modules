#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void ) {}

PhoneBook::~PhoneBook(void ) {}

int PhoneBook::AddContact(int id)
{
	std::cout << "Enter contact fields: first name, last name, nickname, phone number and darkest secret." << std::endl;
	std::cout << "---------------------------------------------------------------------------------------" << std::endl;
	this->_contacts[id].CreateContact();
	if (this->_contacts[id].EmptyContact())
	{
		std::cout << "Empty contact" << std::endl;
		return id;
	}
	else
	{
		std::cout << "Contact ID " << id + 1 << " added successfully" << std::endl;
		return id + 1;
	}
}

int	PhoneBook::SearchContact(void )
{
	std::string	cont;
	int index;
	int id = -1;

	std::cout << "╒══════════╤══════════╤══════════╤══════════╕" << std::endl;
	std::cout << "│     index│first name│ last name│  nickname│" << std::endl;
	std::cout << "╞══════════╪══════════╪══════════╪══════════╡" << std::endl;
	while (++id < BOOK_SIZE)
		if (!this->_contacts[id].EmptyContact())
			this->_contacts[id].PrintContact(id);
	std::cout << "╘══════════╧══════════╧══════════╧══════════╛" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter the index of the desired contact: ";
	std::getline(std::cin, cont);
	index = atoi(cont.c_str());
	if (index < 1 || index > BOOK_SIZE)
	{
		std::cout << "Invalid contact index" << std::endl;
		return 0;
	}
	this->PrintToDispley(index - 1);
	return 0;
}

void	PhoneBook::PrintToDispley(int id)
{
	if (this->_contacts[id].EmptyContact())
		std::cout << "Empty contact" << std::endl;
	else
		this->_contacts[id].FullContact();
}