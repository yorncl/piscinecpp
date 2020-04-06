#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request form", target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::execute(executor);
	}
	catch(const std::exception& e)
	{
		throw;
	}
	if(rand() % 2)
		std::cout << this->getTarget() << " robotomization successfull !" << std::endl;
	else
		std::cout << this->getTarget() << " robotomization failed !" << std::endl;
}