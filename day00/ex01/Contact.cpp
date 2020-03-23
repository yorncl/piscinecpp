#include "Contact.hpp"


void	Contact::print()
{
	std::cout << "First name:\"" << first << '"' << std::endl;
	std::cout << "Last name:\"" << last << '"' << std::endl;
	std::cout << "Nickname:\"" << pseudo << '"' << std::endl;
	std::cout << "Login:\"" << login << '"' << std::endl;
	std::cout << "Postal adrress:\"" << postal << '"' << std::endl;
	std::cout << "Email address:\"" << mail << '"' << std::endl;
	std::cout << "Phone number:\"" << phone << '"' << std::endl;
	std::cout << "Birth date:\"" << birth << '"' << std::endl;
	std::cout << "Favorite Meal:\"" << meal << '"' << std::endl;
	std::cout << "Underwear color:\"" << underwear << '"' << std::endl;
	std::cout << "Darkest secret:\"" << secret << '"' << std::endl;
}