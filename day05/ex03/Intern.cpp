#include "Intern.hpp"


Intern::Intern()
{
}

Intern::Intern(const Intern &)
{
}

Intern &Intern::operator=(const Intern &) {
}

Intern::~Intern()
{
}

int Intern::resolveName(std::string name)
{
    int i = 0;
    
    while (!labels[i].empty())
    {
        if (name.compare(labels[i]) == 0)
            return i;
        i++;
    }
    return -1;
}

Form *


Form *Intern::makeForm(std::string type, std::string target)
{
    switch (resolveName(type))
    {
        case 0:
            return new ShrubberyCreationForm(target);
            break;
        case 1:
            return new PresidentialPardonForm(target);
            break;
        case 2:
            return new RobotomyRequestForm(target);
            break;
        default:
            std::cout << "F" << std::endl;
            return NULL;
            break;
    }    
}
