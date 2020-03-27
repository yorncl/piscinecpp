
#include <iostream>
#include <string>
#include <cstring>

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

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	
	if (check_input(argc, argv))
	{
		std::cout << "\e[31;1mWrong input\e[0m" << std::endl;
		return 1;
	}
	std::fstream stream;
	std::cout << "Hello world !" << std::endl;
	return 0;
}
