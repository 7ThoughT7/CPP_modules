#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << "<\x1b[32m" << "Bureaucrat" << "\x1b[0m>\t\t\t" << "Destructor called " << "\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << "<\x1b[32m" << "Bureaucrat" << "\x1b[0m>\t\t\t" << "Constructor called" << "\n";
	this->_name = name;
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
