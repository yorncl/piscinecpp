#if !defined(PHONEBOOK)
#define PHONEBOOK

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class Phonebook
{
public:
    Phonebook();
    Phonebook(Phonebook &&) = default;
    Phonebook(const Phonebook &) = default;
    Phonebook &operator=(Phonebook &&) = default;
    Phonebook &operator=(const Phonebook &) = default;
    ~Phonebook();
    std::string getField(std::string label, bool mandatory = false);
    void	Phonebook::print_reduced(Contact &c);
    void    Phonebook::print_detail(Contact &c);


private:
    Contact book[8];
    int     nb;

public:
    void    add_contact();
    void    search_contact();

};
#endif // PHONEBOOK
