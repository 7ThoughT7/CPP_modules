#include <string>
#include <iostream>

typedef struct
{
	int x;
	int y;
	int z;
} Data;

uintptr_t serealize(Data * ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserealize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main ()
{
	Data * ex = new Data();
	Data * dub;
	uintptr_t raw;

	std::cout << "Указатель на выделенную память:\t\t\t" << ex << "\n";
	raw = serealize(ex);
	dub = deserealize(raw);
	std::cout << "Преобразуем указатель в число:\t\t\t" << raw << "\n";
	if (ex == dub)
		std::cout << "После отратного преобразования получаем:\t" << ex << "\n";

	delete ex;
	return (0);
}



