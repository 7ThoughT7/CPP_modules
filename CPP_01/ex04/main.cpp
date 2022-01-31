#include "fileReplace.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4) {
		std::cerr <<  "Error: " << argv[0] << " filename [s1] [s2]" << std::endl;
		return (1);
	}

	FileReplace file(argv[1]);

	try {
		file.f_replace(argv[2], argv[3]);
	}
	catch (char *error) {
		std::cerr << "Error: " << error << std::endl;
	}
	return (0);
}