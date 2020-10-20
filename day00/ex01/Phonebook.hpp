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

private:
    Contact book[8];
    int     nb;

public:
    void    add_contact();
    void    search_contact();

};
#endif // PHONEBOOK
