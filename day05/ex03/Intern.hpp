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
    virtual ~Intern();
    Form *makeForm(std::string type, std::string target);
private:
    typedef struct s_pair
    {
        std::string name;
        Form* (*fn)(std::string &target);
    }       t_pair;

    static t_pair _types[4];

    static Form *createPresidential(std::string &target);
    static Form *createRobotomy(std::string &target);
    static Form *createShrubbery(std::string &target);
};

#endif // INTERN_HPP
