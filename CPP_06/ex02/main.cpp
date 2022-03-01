#include <string>
#include <iostream>

class Base
{
	public:
	virtual ~Base(){};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate()
{
	std::srand(std::time(nullptr)  * std::rand() * std::clock());
	int i = std::rand() % 3;
	if (i == 0)
	{
		std::cout << "Create class A : ";
		return new A();
	}
	else if (i == 1)
	{
		std::cout << "Create class B : ";
		return new B();
	}
	else if (i == 2)
	{
		std::cout << "Create class C : ";
		return new C();
	}
	return nullptr;
}


void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << "\n";
	}
	catch (...){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << "\n";
	}
	catch (...) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << "\n";
	}
	catch (...) {}
}

void identify(Base* p)
{
	if ((char*)p == nullptr)
	{
		std::cout << "?" << "\n";
		return ;
	}
	if (dynamic_cast<A*>(p))
		std::cout << "A" << "\n";
	if (dynamic_cast<B*>(p))
		std::cout << "B" << "\n";
	if (dynamic_cast<C*>(p))
		std::cout << "C" << "\n";
}

int main()
{
	std::cout << "-----//Pointer//-----" << "\n";
	for (int i = 0; i < 10; i++)
	{
		Base *ex = generate();
		identify(ex);
		delete ex;
	}
	std::cout << "-----//Reference//-----" << "\n";
	for (int i = 0; i < 10; i++)
	{
		Base &ex = *(generate());
		identify(ex);
		delete &ex;
	}
	return (0);
}


