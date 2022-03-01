#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Vladiput"), _grade(HIGHT_GRADE)
{
	std::cout << "<\x1b[32m" << "Bureaucrat" << "\x1b[0m>\t\t\t" << "Default constructor called " << "\n";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade > LOW_GRADE || grade < HIGHT_GRADE)
		std::cout << "Bureaucrat creation failed: ";
	if (grade > LOW_GRADE)
		throw Bureaucrat::GradeTooLowException("Grade exceeds the valid value");
	else if (grade < HIGHT_GRADE)
		throw Bureaucrat::GradeTooHighException("Grade less than the valid value");
	_grade = grade;
	std::cout << "Created bureaucrat " + _name << "\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	const_cast<std::string&>(this->_name) = other._name;
	_grade = other._grade;
}

const std::string &Bureaucrat::getName() const { return _name; }

void Bureaucrat::higherGrade()
{
	_grade--;
	if (_grade < HIGHT_GRADE)
		throw GradeTooHighException("Grade higher exception");
}

void Bureaucrat::belowGrade()
{
	_grade++;
	if (_grade > LOW_GRADE)
		throw GradeTooLowException("Grade exceeds the valid value");
}

void Bureaucrat::executeForm(Form &form) const
{
	try
	{
		form.execute(*this);
		std::cout << "Form " << "\033[33m" << form.getName() << "\033[0m" << " was executed by bureaucrat " << "\033[34m" << getName() << "\033[0m" << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m" << "Execution error: " << "\033[0m" << e.what() << "\n";
	}
}


void Bureaucrat::signForm(Form &f)
{
	if (f.isSigned() == true)
		std::cerr << "Bureaucrat " << "\033[34m" << _name << "\033[0m" << " cannot sign form " << "\033[33m" << f.getName() << "\033[0m"
		<< " because: it's is signed" << "\n";
	else
	{
		try
		{
			f.beSigned(*this);
			std::cout << "\033[34m" << _name << "\033[0m" << " signs " << "\033[33m" << f.getName() << "\033[0m" << "\n";
		}
		catch (std::exception &e)
		{
			std::cout << "\033[34m" << _name << "\033[0m" << " can not sign form " << "\033[33m" << f.getName() << "\033[0m" << " because: ";
			std::cout << e.what() << "\n";
		}
	}
}

unsigned int Bureaucrat::getGrade() const { return _grade; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	const_cast<std::string&>(_name) = other.getName();
	_grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "<\x1b[32mBureaucrat\x1b[0m>\t\t\t\t" + _name + " destructed" << "\n";
}

// ------------------Bureaucrat::GradeTooHighException---------------------
Bureaucrat::GradeTooHighException::GradeTooHighException
(const std::string &errmsg) : _errmsg(errmsg) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (std::string("GradeTooHighException: " + _errmsg)).c_str();
}

// ------------------Bureaucrat::GradeTooLowException---------------------
Bureaucrat::GradeTooLowException::GradeTooLowException
(const std::string &errmsg) : _errmsg(errmsg) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (std::string("GradeTooLowException: " + _errmsg)).c_str();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade();
	return os;
}