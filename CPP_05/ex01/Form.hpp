#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_sign;
		int 				_gradeSigned;
		int					_gradeExecute;

	public:
		Form( void );
		~Form( void );
		Form(std::string name, int gradeSign, int gradeExecute);
		Form &operator=(Form const &clas);
		Form(const Form &clas);


		const std::string	&getName( void ) const;
		bool				getSign( void ) const;
		int					getGradeSigned( void ) const;
		int					getGradeExecute( void ) const;

		void	beSigned(Bureaucrat const &clas);

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

std::ostream &operator<<(std::ostream &out, Form const &clas);

#endif //FORM_HPP
