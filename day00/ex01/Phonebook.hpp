#if !defined(PHONEBOOK)
#define PHONEBOOK

#include "Contact.hpp"
#include "Utils.hpp"
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
    std::string getField(const std::string label, bool mandatory = false);
    void	printReduced(const Contact &c) const;
    void    printDetail(const Contact &c) const;


private:
    Contact book[8];
    int     nb;

public:
    void    addContact();
    void    searchContact() const;

};
#endif // PHONEBOOK
