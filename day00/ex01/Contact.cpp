#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void	Contact::print() const
{
	std::cout << "First name:\"" << first_name << '"' << std::endl;
	std::cout << "Last name:\"" << last_name << '"' << std::endl;
	std::cout << "Nickname:\"" << nickname << '"' << std::endl;
	std::cout << "Login:\"" << login << '"' << std::endl;
	std::cout << "Postal adrress:\"" << postal_address << '"' << std::endl;
	std::cout << "Email address:\"" << email_address << '"' << std::endl;
	std::cout << "Phone number:\"" << phone_number << '"' << std::endl;
	std::cout << "Birth date:\"" << birthday_date << '"' << std::endl;
	std::cout << "Favorite Meal:\"" << favorite_meal << '"' << std::endl;
	std::cout << "Underwear color:\"" << underwear_color << '"' << std::endl;
	std::cout << "Darkest secret:\"" << darkest_secret << '"' << std::endl;
}

void	Contact::print_reduced() const
{
	std::cout << std::setw(10) << (first_name.size() > 10 ? first_name.substr(0, 9) + '.' : first_name) << "|";
	std::cout << std::setw(10) << (last_name.size() > 10 ? last_name.substr(0, 9) + '.' : last_name) << "|";
	std::cout << std::setw(10) << (nickname.size() > 10 ? nickname.substr(0, 9) + '.' : nickname) << std::endl;
}

void Contact::fill() {
    	getField(first_name, "First name (Cannot be empty)", true);
		getField(last_name, "Last name (Cannot be empty)", true);
		getField(nickname, "Nickname (Cannot be empty)", true);
		getField(login, "Login (Cannot be empty)", true);
		getField(postal_address, "Postal address");
		getField(email_address, "Mail");
		getField(phone_number, "Phone number");
		getField(birthday_date, "Birth date");
		getField(favorite_meal, "Favorite meal");
		getField(underwear_color, "Underwear color");
		getField(darkest_secret, "Darkest secret");
}

void Contact::getField(std::string &p, std::string label, bool mandatory) {
    do
	{
		std::cout << label <<" ?" << std::endl;
		std::cin.clear();
		std::getline(std::cin, p);
        if (std::cin.eof())
            std::cin.clear();
	} while (p.size() == 0 && mandatory);
}
