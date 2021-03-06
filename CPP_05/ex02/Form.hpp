#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _gradeSigned;
	const int _gradeExecuted;
	void checkGrades();

protected:
	void setSigned(bool signed_);

public:
	Form();
	Form(const std::string &name, int gradeSigned, int gradeExecuted);
	Form(const std::string &name, bool _signed, int gradeSigned, int gradeExecuted);
	const std::string &getName() const;
	virtual ~Form();
	Form(const Form &other);
	Form &operator=(const Form &other);
	bool isSigned() const;
	int getGradeSigned() const;
	int getGradeExecuted() const;
	void beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
	class FormNotSignedException : public std::exception
	{
		private:
			std::string _errmsg;
		public:
			FormNotSignedException(const std::string &errmsg);
			const char *what() const throw();
			virtual ~FormNotSignedException() throw() {};
	};
};
std::ostream &operator<<(std::ostream &out, const Form &form);

#endif //FORM_HPP
