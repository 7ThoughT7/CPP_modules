#include "Bureaucrat.hpp"

void prints(std::string name, int grade, int flag);

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