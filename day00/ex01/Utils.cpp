#include "Utils.hpp"

std::string Utils::getInput()
{
	std::string	buff;
	unsigned long start, end;

	if (std::getline(std::cin, buff).eof() || buff.size() == 0)
		return "";
	start = buff.find_first_not_of("\t\n\v\f\r ");
	end = buff.find_last_not_of("\t\n\v\f\r ");
	if (start == buff.npos)
		start = 0;
	if (end == buff.npos)
		end = 0;
	return buff.substr(start, end - start + 1);
}
