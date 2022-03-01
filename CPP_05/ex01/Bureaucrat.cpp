#include "Bureaucrat.hpp"
#include "../ex02/Bureaucrat.hpp"


Bureaucrat::~Bureaucrat()
{
	std::cout << "<\x1b[32m" << "Bureaucrat" << "\x1b[0m>\t\t\t" << "Destructor called " << "\n";
}

Bureaucrat::Bureaucrat() : _name("no")
{
	std::cout << "<\x1b[32m" << "Bureaucrat" << "\x1b[0m>\t\t\t" << "Default constructor called " << "\n";
	int grade = 0;

	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();

	this->_grade = grade;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSign() == true)
		std::cout << this->_name << " signs " << form.getName() << " because: the form is signed" << "\n";
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->_name << " signs " << form.getName() << "\n";
		}
		catch (std::exception &err)
		{
			std::cout << this->_name << " not sign " << form.getName() << " because: ";
			std::cout << err.what() << "\n";
		}
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "<\x1b[32m" << "Bureaucrat" << "\x1b[0m>\t\t\t" << "Constructor called" << "\n";
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &clas)
{
	std::cout << "<\x1b[32m" << "Bureaucrat" << "\x1b[0m>\t\t\t" << "Constructor copy" << "\n";
	(*this) = clas;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &clas)
{
	if (this == &clas)
		return (*this);
	this->_grade = clas._grade;
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::higherGrade()
{
	if (--this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::belowGrade()
{
	if (++this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &clas)
{
	out << clas.getName() << ". Grade: " << clas.getGrade() << "\n";
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\x1b[31mConstructor error\x1b[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\x1b[31mConstructor error\x1b[0m");
}

