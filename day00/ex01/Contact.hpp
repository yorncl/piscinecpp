#ifndef CONTACT
# define CONTACT

#include <string>
#include <iostream>
#include <iomanip>
#include "Utils.hpp"

class Contact
{
public:
	Contact();
	Contact(Contact &&) = default;
	Contact(const Contact &) = default;
	Contact &operator=(Contact &&) = default;
	Contact &operator=(const Contact &) = default;
	~Contact();

	// The use of trivial getters and setters (one line function) is not recommended in C++, but the subject ask for it

	//Setters
	void	setFirstName(std::string str);
	void	setLastName(std::string str);
	void	setNickname(std::string str);
	void	setLogin(std::string str);
	void	setPostalAddress(std::string str);
	void	setEmailAddress(std::string str);
	void	setPhoneNumber(std::string str);
	void	setBirthdayDate(std::string str);
	void	setFavoriteMeal(std::string str);
	void	setUnderwearColor(std::string str);
	void	setDarkestSecret(std::string str);
	//Getters
	const std::string&	getFirstName() const;
	const std::string&	getLastName() const;
	const std::string&	getNickname() const;
	const std::string&	getLogin() const;
	const std::string&	getPostalAddress() const;
	const std::string&	getEmailAddress() const;
	const std::string&	getPhoneNumber() const;
	const std::string&	getBirthdayDate() const;
	const std::string&	getFavoriteMeal() const;
	const std::string&	getUnderwearColor() const;
	const std::string&	getDarkestSecret() const;

private:
    void	getField(std::string &p, std::string label, bool mandatory = false);
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