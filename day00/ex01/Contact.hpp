#ifndef CONTACT
# define CONTACT

#include <string>
#include <iostream>

class Contact
{
public:
	Contact();
	Contact(Contact &&) = default;
	Contact(const Contact &) = default;
	Contact &operator=(Contact &&) = default;
	Contact &operator=(const Contact &) = default;
	~Contact();
	void	print();
	std::string first,
				last,
				pseudo,
				login,
				postal,
				mail,
				phone,
				birth,
				meal,
				underwear,
				secret;
};
#endif