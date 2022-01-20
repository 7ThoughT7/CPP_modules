#include "Contact.hpp"

Contact::Contact(void ) {}

Contact::~Contact(void ) {}

void	Contact::CreateContact(void )
{
	std::cout << "FirstName -> ";
	std::getline(std::cin, this->FirstName);
	if (std::cin.eof())
		std::cout << "Empty FirstName" << std::endl;
	std::cout << "Last Name -> ";
	std::getline(std::cin, this->LastName);
	if (std::cin.eof())
		std::cout << "Empty LastName" << std::endl;
	std::cout << "Nickname -> ";
	std::getline(std::cin, this->NickName);
	if (std::cin.eof())
		std::cout << "Empty NickName" << std::endl;
	std::cout << "Phone Number -> ";
	std::getline(std::cin, this->PhoneNumber);
	if (std::cin.eof())
		std::cout << "Empty PhoneNumber" << std::endl;
	std::cout << "Darkest Secret -> ";
	std::getline(std::cin, this->DarkestSecret);
	if (std::cin.eof())
		std::cout << "Empty Darkest Secret" << std::endl;
}

bool	Contact::EmptyContact(void )
{
	bool	empty = true;
	if (!this->FirstName.empty())
		empty = false;
	if (!this->LastName.empty())
		empty = false;
	if (!this->NickName.empty())
		empty = false;
	if (!this->PhoneNumber.empty())
		empty = false;
	if (!this->DarkestSecret.empty())
		empty = false;
		return empty ? true : false;
}

void	Contact::PrintContact(int id)
{
	std::cout << "|" << std::setw(STR_LEN) << id + 1;
	if (this->FirstName.size() > 10)
		std::cout << "|" << std::setw(STR_LEN - 1) << this->FirstName.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(STR_LEN) << this->FirstName;
	if (this->LastName.size() > 10)
		std::cout << "|" << std::setw(STR_LEN - 1) << this->LastName.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(STR_LEN) << this->LastName;
	if (this->NickName.size() > 10)
		std::cout << "|" << std::setw(STR_LEN - 1) << this->NickName.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(STR_LEN) << this->NickName;
	std::cout << "|" << std::endl;
}

void 	Contact::FullContact(void )
{
	std::cout << "FirstName: " << FirstName << std::endl;
	std::cout << "LastName: "  << LastName << std::endl;
	std::cout << "NickName: "  << NickName << std::endl;
	std::cout << "PhoneNumber: " << PhoneNumber << std::endl;
	std::cout << "DarkestSecret: " << DarkestSecret << std::endl;
}