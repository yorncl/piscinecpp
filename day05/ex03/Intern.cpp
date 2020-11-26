#include "Intern.hpp"


std::string Intern::_labels[4] = {
        "shrubbery creation",
        "presidential pardon",
        "robotomy request",
        ""
};

Intern::Intern()
{    
}

Intern::Intern(const Intern &)
{
}

Intern &Intern::operator=(const Intern &) {
    return *this;
}

Intern::~Intern()
{
}

int Intern::resolveName(std::string name)
{
    int i = 0;
    
    while (!_labels[i].empty())
    {
        if (name.compare(_labels[i]) == 0)
            return i;
        i++;
    }
    return -1;
}

Form *Intern::createForm(int id, std::string target)
{
    std::cout << "Intern creates " << _labels[id] << std::endl;
    switch (id)
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
            break;
    }
    return NULL;
}

Form *Intern::makeForm(std::string type, std::string target)
{

    int id = resolveName(type);
    if (id >= 0)
        return createForm(id, target);
    std::cout << "The Form has not been found" << std::endl;
    return NULL;
}  
