
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

int check_input(int argc, char const *argv[])
{

	if (argc != 4)
	{
		std::cout << "Number of arguments invalid" << std::endl;
		return -1;
	}
	if (std::strlen(argv[1]) == 0 || std::strlen(argv[2]) == 0 || std::strlen(argv[3]) == 0)
	{
		std::cout << "Arguments cannot be empty" << std::endl;
		return -1;
	}
	return 0;
}


void	replaceS1forS2(std::string& s, const std::string& s1, const std::string& s2)
{
	size_t l1 = s1.size();
	size_t l2 = s2.size();
	size_t ptr;
	size_t startpos = 0;
	
	while ((ptr = s.find(s1, startpos)) != std::string::npos)
	{	
		s.replace(ptr, l1, s2);
		startpos = ptr + l2;
	}
}

int main(int argc, char const *argv[])
{
	if (check_input(argc, argv))
	{
		std::cout << "\e[31;1mWrong input\e[0m" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream fin;
	std::ofstream fout;
	std::string line;
	fin.open(filename, std::ios::in);
	if (fin.fail())
	{
		std::cerr << "\"" << filename << "\" -- Error: " << strerror(errno) << std::endl;
		return 1;
	}
	fout.open(filename + ".replace", std::ios::out | std::ios::trunc);
	if (fout.fail())
	{
		std::cerr << "Output file -- Error: " << strerror(errno) << std::endl;
		return 1;
	}	
	while (1)
	{
		try
		{
			getline(fin, line);
			replaceS1forS2(line, s1, s2);
			fout << line;
			if (!fin.eof())
				fout << std::endl;
			else
				break;
			
		}
		catch (const std::exception &e)
		{
			std::cerr << "\e[31;1m" <<e.what() << "\e[0m" << '\n';
			break;
		}
	}
	fin.close();
	fout.close();
	std::cout << "Hello world !" << std::endl;
	return 0;
}
