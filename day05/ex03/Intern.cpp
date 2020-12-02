#include "Intern.hpp"


Intern::t_pair Intern::_types[4] = {
        {"shrubbery creation", &Intern::createShrubbery},
        {"presidential pardon", &Intern::createPresidential},
        {"robotomy request", &Intern::createRobotomy},
        {"", NULL}
        
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

Form *Intern::createPresidential(std::string &target)
{
    return new PresidentialPardonForm(target);
}

Form *Intern::createRobotomy(std::string &target)
{
    return new RobotomyRequestForm(target);
}

Form *Intern::createShrubbery(std::string &target)
{
    return new ShrubberyCreationForm(target);
}


Form *Intern::Intern::makeForm(std::string type, std::string target)
{
    int i = 0;
    while (!_types[i].name.empty())
    {
        if (_types[i].name == type)
            return _types[i].fn(target);
        i++;
    }
    std::cout << "The Form has not been found" << std::endl;
    return NULL;
}  
