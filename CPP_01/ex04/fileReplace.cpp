#include "fileReplace.hpp"

FileReplace::FileReplace(const std::string& iName): _inFile(iName), _outFile(iName + ".replace"){}

FileReplace::~FileReplace()
{
	_inFile.close();
	_outFile.close();
}

void FileReplace::f_replace(const std::string& s1, const std::string& s2)
{
	std::string line;

	if (!_inFile)
		throw std::invalid_argument("file not open");
	while (std::getline(_inFile, line))
		_outFile << replaceLine(line, s1, s2) << std::endl;
}

std::string FileReplace::replaceLine(std::string line, const std::string &from, const std::string &to)
{
	size_t pos = 0;
	while((pos = line.find(from, pos)) != std::string::npos)
	{
		line.erase(pos, from.length());
		line.insert(pos, to);
		pos += to.length();
	}
	return line;
}