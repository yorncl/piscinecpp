#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "Phonebook.hpp"
#include <string>



int		main(void)
{
	std::string	buff;
	Phonebook book;

	std::cout << "\e[32;1mWelcome to Phonebook3000 !\e[0m" << std::endl;
	while (1)
	{
		std::cout << "Please enter a valid command (ADD, SEARCH, EXIT)" << std::endl;
		if (std::getline(std::cin, buff).eof())
		{
			std::cout << "\e[32;1mGoodbye !\e[0m" << std::endl;
			break;
		}	
		else if (buff.compare("EXIT") == 0)
		{
			std::cout << "\e[32;1mGoodbye !\e[0m" << std::endl;
			break;
		}
		else if (buff.compare("ADD") == 0)
			book.add_contact();
		else if (buff.compare("SEARCH") == 0)
			book.search_contact();
	}
	return 0;
}