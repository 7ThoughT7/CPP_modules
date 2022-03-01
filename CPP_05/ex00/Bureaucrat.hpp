#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	std::string _name;
	int 		_grade;
	Bureaucrat( void ) {};

public:
	~Bureaucrat( void );
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &clas);
	Bureaucrat &operator=(const Bureaucrat &clas);

	const std::string &getName( void ) const;
	int getGrade( void ) const;

	void higherGrade( void );
	void belowGrade( void );

	class GradeTooHighException : public std::exception
	{
	private:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	private:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &clas);

#endif //BUREAUCRAT_HPP
