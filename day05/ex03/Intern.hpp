#if !defined(INTERN_HPP)
#define INTERN_HPP

#include <string>

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"


class Intern
{
public:
    Intern();
    Intern(const Intern &);
    Intern &operator=(const Intern &);
    ~Intern();
    Form *makeForm(std::string type, std::string target);
private:
    int resolveName(std::string name);
    Form *createForm(int id, std::string target);
    static std::string _labels[4];
};

#endif // INTERN_HPP
