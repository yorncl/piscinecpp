#ifndef CONTACT
# define CONTACT

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
public:
	Contact();
	Contact(Contact &&) = default;
	Contact(const Contact &) = default;
	Contact &operator=(Contact &&) = default;
	Contact &operator=(const Contact &) = default;
	~Contact();
	void	print() const;
	void	print_reduced() const;
	void	fill();
    void	getField(std::string &p, std::string label, bool mandatory = false);

private:
	std::string first_name,
				last_name,
				nickname,
				login,
				postal_address,
				email_address,
				phone_number,
				birthday_date,
				favorite_meal,
				underwear_color,
				darkest_secret;
};
#endif