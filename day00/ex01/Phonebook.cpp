#include "Phonebook.hpp"

Phonebook::Phonebook() {
    nb = 0;
}

Phonebook::~Phonebook() {
}

void Phonebook::add_contact() {
	if (nb < 8)
	{
		getField(book[nb].first, "First name (Cannot be empty)", true);
		getField(book[nb].last, "Last name (Cannot be empty)", true);
		getField(book[nb].pseudo, "Nickname (Cannot be empty)", true);
		getField(book[nb].login, "Login (Cannot be empty)", true);
		getField(book[nb].postal, "Postal address");
		getField(book[nb].mail, "Mail");
		getField(book[nb].phone, "Phone number");
		getField(book[nb].birth, "Birth date");
		getField(book[nb].meal, "Favorite meal");
		getField(book[nb].underwear, "Underwear color");
		getField(book[nb].secret, "Darkest secret");
		nb++;
		std::cout << "\e[32;1mContact added !\e[0m" << std::endl;
	}
	else
		std::cout << "Phonebook is full !" << std::endl;
}


void Phonebook::getField(std::string &p, std::string label, bool mandatory) {
	do
	{
		std::cout << label <<" ?" << std::endl;
		std::cin.clear();
		std::getline(std::cin, p);
	} while (p.size() == 0 && mandatory);
}

void Phonebook::search_contact() {
    int index;

    if (nb == 0)
        std::cout << "Phonebook is empty !" << std::endl;
    else
    {
        std::cout << "     index|     first|      last|    pseudo" << std::endl;
        std::cout << std::string(43, '-') << std::endl;
        for (int i = 0; i < nb; i++)
        {
            std::cout << std::setw(10) << i << "|";
            std::cout << std::setw(10) << (book[i].first.size() > 10 ? book[i].first.substr(0, 9) + '.' : book[i].first) << "|";
            std::cout << std::setw(10) << (book[i].last.size() > 10 ? book[i].last.substr(0, 9) + '.' : book[i].last) << "|";
            std::cout << std::setw(10) << (book[i].pseudo.size() > 10 ? book[i].pseudo.substr(0, 9) + '.' : book[i].pseudo) << std::endl;
        }
        do
        {
            std::cout << "Please enter a valid index" << std::endl;
            if (!(std::cin >> index))
            {
                std::cout << "ERROR" << std::endl;
                std::cin.clear();
                index = -1;
            }
        } while (index < 0 || index >= nb);
        std::cout << "---------- Contact " << index << " ----------" << std::endl;
        book[index].print();
        std::cout << "---------- END " << index << " ----------" << std::endl;
    }	
}
