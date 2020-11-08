
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

static void printUsage()
{
	std::cout << "Usage: replace [filename] [s1] [s2]" << std::endl;
	std::cout << "Replace every occurence of s1 in a file with s2" << std::endl;
}

static int wrongArgs(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong arguments count" << std::endl;
		return 1;
	}
	if (std::strlen(argv[1]) == 0)
	{
		std::cout << "Filename should not be empty" << std::endl;
		return 1;
	}
	if (std::strlen(argv[2]) == 0)
	{
		std::cout << "String to replace should not be empty" << std::endl;
		return 1;
	}
	return 0;
}


static void	replaceS1forS2(std::string& s, const std::string& s1, const std::string& s2)
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
	// Arguments check
	if (wrongArgs(argc, argv))
	{
		std::cout << std::endl;
		printUsage();
		return 1;
	}

	// variables
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream fin;
	std::ofstream fout;
	std::string line;

	// Opening filestreams
	fin.open(filename, std::ios::in);
	if (fin.fail())
	{
		std::cerr << " Can't open " << filename << " -- Error: " << strerror(errno) << std::endl;
		return 1;
	}
	fout.open(filename + ".replace", std::ios::out | std::ios::trunc);
	if (fout.fail())
	{
		std::cerr << "Can't open output file (" << filename << ".replace) -- Error: " << strerror(errno) << std::endl;
		return 1;
	}
	// Main loop
	while (1)
	{
		try
		{
			std::getline(fin, line);
			replaceS1forS2(line, s1, s2);
			fout << line;
				fout << std::endl;
			if (fin.eof())
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
	return 0;
}
