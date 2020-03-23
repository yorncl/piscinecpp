#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include <string>

void	getField(std::string *p, std::string label, bool mandatory = false)
{
	std::cout << label <<" ?" << std::endl;
	do
	{
		std::getline(std::cin, *p);
	} while (p->size() == 0 && mandatory);
}

int		main(void)
{
	std::string	command;
	Contact* book[8];
	size_t nb = 0;
	size_t index = 0;

	std::cout << "\e[32;1mWelcome to Phonebook3000 !\e[0m" << std::endl;
	while (1)
	{
		std::cout << "Please enter a valid command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, command);;
		if (command.compare("EXIT") == 0)
		{
			std::cout << "\e[32;1mGoodbye !\e[0m" << std::endl;
			break;
		}
		else if (command.compare("ADD") == 0)
		{
			if (nb < 8)
			{
				book[nb] = new Contact();
				getField(&book[nb]->first, "First name (Cannot be empty)", true);
				getField(&book[nb]->last, "Last name (Cannot be empty)", true);
				getField(&book[nb]->pseudo, "Nickname (Cannot be empty)", true);
				getField(&book[nb]->login, "Login (Cannot be empty)", true);
				getField(&book[nb]->postal, "Postal address");
				getField(&book[nb]->mail, "Mail");
				getField(&book[nb]->phone, "Phone number");
				getField(&book[nb]->birth, "Birth date");
				getField(&book[nb]->meal, "Favorite meal");
				getField(&book[nb]->underwear, "Underwear color");
				nb++;
			}
			else
				std::cout << "Phonebook is full !" << std::endl;
		}
		else if (command.compare("SEARCH") == 0)
		{
			if (nb == 0)
				std::cout << "Phonebook is empty !" << std::endl;
			else
			{
				std::cout << "     index|     first|      last|    pseudo" << std::endl;
				std::cout << std::string(43, '-') << std::endl;
				for (size_t i = 0; i < nb; i++)
				{
					std::cout << std::setw(10) << i << "|";
					std::cout << std::setw(10) << (book[i]->first.size() > 10 ? book[i]->first.substr(0, 9) + '.' : book[i]->first) << "|";
					std::cout << std::setw(10) << (book[i]->last.size() > 10 ? book[i]->last.substr(0, 9) + '.' : book[i]->last) << "|";
					std::cout << std::setw(10) << (book[i]->pseudo.size() > 10 ? book[i]->pseudo.substr(0, 9) + '.' : book[i]->pseudo) << std::endl;
				}
				do
				{
					std::cout << "Please enter a valid index" << std::endl;
					std::cin >> index;
				} while (index < 0 || index >= nb);
				book[index]->print();
			}	
		}
	}
	return 0;
}