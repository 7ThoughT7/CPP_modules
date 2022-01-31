#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP
#include <iostream>
#include <fstream>

class FileReplace
{
public:
	FileReplace(const std::string& iName);
	~FileReplace();

	void f_replace(const std::string& s1, const std::string& s2);
	static std::string replaceLine(std::string line, const std::string& from, const std::string& to);

private:
	std::ifstream _inFile;
	std::ofstream _outFile;
};

#endif
