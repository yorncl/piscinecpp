#include <ostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
	std::srand(std::time(0));
	std::cout << "" << std::endl;

	Bureaucrat bob("Bob", 10);
	Bureaucrat nulos("Nulos", 150);

	std::cout << "===== ROBOTOMY =======" << std::endl;
	Bureaucrat c("Joseph", 10);
	Form *f1 = new RobotomyRequestForm("CIBLE");
	c.executeForm(*f1);
	c.signForm(*f1);
	c.executeForm(*f1);
	c.executeForm(*f1);
	c.executeForm(*f1);
	c.executeForm(*f1);
	c.executeForm(*f1);
	c.executeForm(*f1);
	delete f1;
	std::cout << std::endl;
	
	std::cout << "===== SHRUBBERY =======" << std::endl;
	Form *f2 = new ShrubberyCreationForm("Hi doggy");
	bob.executeForm(*f2);
	nulos.signForm(*f2);
	c.signForm(*f2);
	nulos.executeForm(*f2);
	c.executeForm(*f2);
	delete f2;
	std::cout << std::endl;

	std::cout << "===== PRESIDENTIAL =======" << std::endl;
	Form *f3 = new PresidentialPardonForm("Le capitalisme");
	bob.executeForm(*f3);
	nulos.signForm(*f3);
	c.signForm(*f3);
	nulos.executeForm(*f3);
	bob.executeForm(*f3);
	Bureaucrat chief("Chief", 1);
	chief.executeForm(*f3);
	delete f3;

	return 0;
}
