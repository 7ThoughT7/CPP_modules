#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"

class Bureaucrat;
class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int 				_grade;

	public:
		Bureaucrat( void );
		~Bureaucrat( void );
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &clas);
		Bureaucrat &operator=(const Bureaucrat &clas);

		const std::string &getName( void ) const;
		int getGrade( void ) const;

		void higherGrade( void );
		void belowGrade( void );
		void signForm(Form &form);

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
