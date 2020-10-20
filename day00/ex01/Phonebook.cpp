#include "Phonebook.hpp"

Phonebook::Phonebook() {
    nb = 0;
}

Phonebook::~Phonebook() {
}

void Phonebook::add_contact() {
	if (nb < 8)
	{
        book[nb].fill();
		nb++;
		std::cout << "\e[32;1mContact added !\e[0m" << std::endl;
	}
	else
		std::cout << "Phonebook is full !" << std::endl;
}

void Phonebook::search_contact() {
    int index;
	std::string	buff;

    if (nb == 0)
        std::cout << "Phonebook is empty !" << std::endl;
    else
    {
        std::cout << "     index|first name| last name|  nickname" << std::endl;
        std::cout << std::string(43, '-') << std::endl;
        for (int i = 0; i < nb; i++)
        {
            std::cout << std::setw(10) << i << "|";
            book[i].print_reduced();
        }
        do
        {
            std::cout << "Please enter a valid index" << std::endl;
            if (std::getline(std::cin, buff).eof())
            {
                std::cin.clear();
                std::cout << "Cancelling SEARCH command" << std::endl;
                return;
            }
            if (buff.size() == 0 || buff.find_first_not_of("0123456789") != buff.npos)
                index = -1;
            else
                index = atoi(buff.c_str());
        } while (index < 0 || index >= nb);
        std::cout << "---------- Contact " << index << " ----------" << std::endl;
        book[index].print();
        std::cout << "---------- END ----------" << std::endl;
    }	
}
