#include "Phonebook.hpp"

Phonebook::Phonebook() {
    nb = 0;
}

Phonebook::~Phonebook() {
}

void	Phonebook::print_reduced(Contact &c)
{
	std::cout << std::setw(10) << (c.getFirstName().size() > 10 ? c.getFirstName().substr(0, 9) + '.' : c.getFirstName()) << "|";
	std::cout << std::setw(10) << (c.getLastName().size() > 10 ? c.getLastName().substr(0, 9) + '.' : c.getLastName()) << "|";
	std::cout << std::setw(10) << (c.getNickname().size() > 10 ?c. getNickname().substr(0, 9) + '.' :c. getNickname()) << std::endl;
}

void    Phonebook::print_detail(Contact &c)
{
    std::cout << "First name:\"" << c.getFirstName() << '"' << std::endl;
	std::cout << "Last name:\"" << c.getLastName() << '"' << std::endl;
	std::cout << "Nickname:\"" << c.getNickname() << '"' << std::endl;
	std::cout << "Login:\"" << c.getLogin() << '"' << std::endl;
	std::cout << "Postal adrress:\"" << c.getPostalAddress() << '"' << std::endl;
	std::cout << "Email address:\"" << c.getEmailAddress() << '"' << std::endl;
	std::cout << "Phone number:\"" << c.getPhoneNumber() << '"' << std::endl;
	std::cout << "Birth date:\"" << c.getBirthdayDate() << '"' << std::endl;
	std::cout << "Favorite Meal:\"" << c.getFavoriteMeal() << '"' << std::endl;
	std::cout << "Underwear color:\"" << c.getUnderwearColor() << '"' << std::endl;
	std::cout << "Darkest secret:\"" << c.getDarkestSecret() << '"' << std::endl;
}

std::string Phonebook::getField(std::string label, bool mandatory) {
    std::string input;

    do
	{
		std::cout << label << std::endl;
		std::getline(std::cin, input);
        if (std::cin.eof())
            std::cin.clear();
	} while (input.size() == 0 && mandatory);
    return input.substr(input.find_first_not_of("\t\n\v\f\r"), input.find_last_not_of("\t\n\v\f\r")); 
}


void Phonebook::add_contact() {
	if (nb < 8)
	{
        book[nb].setFirstName(getField("Enter the first name", true));
        book[nb].setLastName(getField("Enter the last name", true));
        book[nb].setNickname(getField("Enter the nickname", true));
        book[nb].setLogin(getField("Enter the login", true));
        book[nb].setPostalAddress(getField("Enter the postal address"));
        book[nb].setEmailAddress(getField("Enter the email address"));
        book[nb].setPhoneNumber(getField("Enter the phone number"));
        book[nb].setBirthdayDate(getField("Enter the birthday date"));
        book[nb].setFavoriteMeal(getField("Enter the favorite meal"));
        book[nb].setUnderwearColor(getField("Enter the underwear color"));
        book[nb].setDarkestSecret(getField("Enter the darkest secret"));
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
            print_reduced(book[i]);
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
                index = std::stoi(buff);
        } while (index < 0 || index >= nb);
        std::cout << "---------- Contact " << index << " ----------" << std::endl;
        book[index].print();
        std::cout << "---------- END ----------" << std::endl;
    }	
}
