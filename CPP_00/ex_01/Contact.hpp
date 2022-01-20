#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define STR_LEN 10

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
public:
	Contact(void );
	~Contact(void );
	void	CreateContact(void );
	bool	EmptyContact(void );
	void	PrintContact(int id);
	void	FullContact(void );
};

#endif