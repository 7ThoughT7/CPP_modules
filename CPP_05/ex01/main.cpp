#include "Bureaucrat.hpp"
#include "Form.hpp"

void prints(std::string name, int grade, int flag);
void test_form(std::string name, int grade, std::string nameForm, int gradeSigned, int count);

int main()
{
	std::cout << "\033[31m" << "test 1" << "\033[0m" << "\n";
	prints("Karl", 2, -1);
	std::cout << "--------------------------" << "\n\n";
	std::cout << "\033[31m" << "test 2" << "\033[0m" << "\n";
	prints("Mark", 148, 1);
	std::cout << "--------------------------" << "\n\n";
	std::cout << "\033[31m" << "test 3" << "\033[0m" << "\n";
	prints("Bob", 140, 0);
	std::cout << "--------------------------" << "\n\n";
	std::cout << "\033[31m" << "test 4" << "\033[0m" << "\n";
	test_form("Bruno", 5, "Form1", 5, 1);
	std::cout << "--------------------------" << "\n\n";
	std::cout << "\033[31m" << "test 5" << "\033[0m" << "\n";
	test_form("Bob", 11, "Form2", 3, 1);
	std::cout << "--------------------------" << "\n\n";
	std::cout << "\033[31m" << "test 6" << "\033[0m" << "\n";
	test_form("Peter", -11, "Form3", 3, 1);
	return 0;
}

void prints(std::string name, int grade, int flag)
{
	Bureaucrat bur(name, grade);

	try
	{
		if (flag == 1)
		{
			std::cout << bur;
			bur.belowGrade();
			std::cout << bur;
			bur.belowGrade();
			std::cout << bur;
			bur.belowGrade();
			std::cout << bur;
		}
		else if (flag == -1)
		{
			std::cout << bur;
			bur.higherGrade();
			std::cout << bur;
			bur.higherGrade();
			std::cout << bur;
			bur.higherGrade();
			std::cout << bur;
		}
		else
			std::cout << bur;
	}
	catch (std::exception &err)
	{
		std::cout << err.what() << "\n";
	}
}

void test_form(std::string name, int grade, std::string nameForm, int gradeSigned, int count)
{
	int gradeDo = 42;
	try
	{
		Bureaucrat	bur(name, grade);
		std::cout << bur << std::endl;
		Form f(nameForm, gradeSigned, gradeDo);
		for (int i = count; i > 0; i--)
			bur.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
}