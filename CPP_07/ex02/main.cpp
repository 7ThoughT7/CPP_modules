#include <iostream>
#include "Array.hpp"

int main ()
{
	Array<int>		intArray(10);
	Array<double>	doubleArray(10);

	for (int i = 0; i < static_cast<int>(intArray.size()); ++i)
	{
		intArray[i] = i + 2;
		doubleArray[i] = i + 0.5;
		std::cout << intArray[i] << "  " << doubleArray[i] << "\n";
	}

    std::cout << "--------------------" << "\n";
	try
	{
		for (int i = 0; i < static_cast<int>(intArray.size()) + 1; ++i)
			std::cout << intArray[i] << "  " << doubleArray[i] << "\n";
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << "\n";
	}
	return 0;
}
//
//#include <iostream>
//#include "Array.hpp"
//
//#define MAX_VAL 750
//int main(int, char**)
//{
//	Array<int> numbers(MAX_VAL);
//	int* mirror = new int[MAX_VAL];
//	srand(time(NULL));
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		const int value = rand();
//		numbers[i] = value;
//		mirror[i] = value;
//	}
//	//SCOPE
//	{
//		Array<int> tmp = numbers;
//		Array<int> test(tmp);
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		if (mirror[i] != numbers[i])
//		{
//			std::cerr << "didn't save the same value!!" << std::endl;
//			return 1;
//		}
//	}
//	try
//	{
//		numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//	try
//	{
//		numbers[MAX_VAL - 2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		numbers[i] = rand();
//	}
//	delete [] mirror;//
//	return 0;
//}