#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define BOOK_SIZE 8

class PhoneBook
{
private:
	Contact _contacts[BOOK_SIZE];
public:
	PhoneBook(void );
	~PhoneBook(void );
	int AddContact(int id);
	int SearchContact(void );
	void PrintToDispley(int id);
};

#endif