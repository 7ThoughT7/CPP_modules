#include "Form.hpp"

Form::Form() : _name("no")
{
	std::cout << "<\x1b[32m" << "Form" << "\x1b[0m>\t\t\t" << "Default constructor called" << "\n";
	int gradeSigned = 0;
	int gradeExecute = 0;

	if (gradeSigned < 1)
		throw Form::GradeTooHighException();
	else if (gradeSigned > 150)
		throw Form::GradeTooLowException();
	if (gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeExecute > 150)
		throw Form::GradeTooLowException();

	this->_sign = 0;
	this->_gradeSigned = gradeSigned;
	this->_gradeExecute = gradeExecute;
}

Form::~Form()
{
	std::cout << "<\x1b[32m" << this->_name << "\x1b[0m>\t\t\t\t" << "Destructor called" << "\n";
}

const std::string &Form::getName() const
{
	return (this->_name);
}

bool Form::getSign() const
{
	return (this->_sign);
}

int Form::getGradeSigned() const
{
	return (this->_gradeSigned);
}

int Form::getGradeExecute() const
{
	return (this->_gradeExecute);
}

void Form::beSigned(Bureaucrat const &clas)
{
	if (clas.getGrade() <= this->_gradeSigned)
		this->_sign = true;
	else
		throw Form::GradeTooLowException();

}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name)
{
	std::cout << "<\x1b[32m" << "Form" << "\x1b[0m>\t\t\t\t" << "Constructor called" << "\n";
	if (gradeSign < 1)
		throw GradeTooHighException();
	else if (gradeSign > 150)
		throw Form::GradeTooLowException();
	if (gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeExecute > 150)
		throw Form::GradeTooLowException();

	this->_sign = 0;
	this->_gradeSigned = gradeSign;
	this->_gradeExecute = gradeExecute;
}

Form &Form::operator=(const Form &clas)
{
	if (this == &clas)
		return (*this);
	this->_sign = clas.getSign();
	this->_gradeSigned = clas.getGradeSigned();
	this->_gradeExecute = clas.getGradeExecute();
	return (*this);
}

Form::Form(const Form &clas)
{
	std::cout << "<\x1b[32m" << "Form" << "\x1b[0m>\t\t\t\t" << "Constructor copy" << "\n";
	(*this) = clas;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("\x1b[31mhigh grade\x1b[0m");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("\x1b[31mhigh grade\x1b[0m");
}

std::ostream &operator<<(std::ostream &out, Form const &clas)
{
	out
	<< "name\t\t: " << clas.getName() << "\n"
	<< "signed\t\t: " << clas.getSign() << "\n"
	<< "gradeSigned\t: " << clas.getGradeSigned() << "\n"
	<< "gradeExecute\t: " << clas.getGradeExecute() << "\n";

	return out;
}