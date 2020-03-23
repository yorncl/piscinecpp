#ifndef CONTACT
# define CONTACT

#include <string>
#include <iostream>

class Contact
{
public:
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