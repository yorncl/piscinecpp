#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "Phonebook.hpp"
#include "Utils.hpp"
#include <string>

int		main(void)
{
	std::string input;
	Phonebook book;

	std::cout << "\e[32;1mWelcome to the Crappy phonebook !\e[0m" << std::endl;
	while (1)
	{
		std::cout << "Please enter a valid command (ADD, SEARCH, EXIT)" << std::endl;
		input = Utils::getInput();
		if (std::cin.eof())
		{
			std::cout << "\e[32;1mGoodbye !\e[0m" << std::endl;
			break;
		}
		if (input.compare("EXIT") == 0)
		{
			std::cout << "\e[32;1mGoodbye !\e[0m" << std::endl;
			break;
		}
		else if (input.compare("ADD") == 0)
			book.addContact();
		else if (input.compare("SEARCH") == 0)
			book.searchContact();
	}
	return 0;
}
