#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request form", target, 72, 45)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	target = f.target;
	sig = f.sig;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) : Form(f.name , f.target, f.gradeSign, f.gradeEx)
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
	if(std::rand() % 2)
		std::cout << this->getTarget() << " robotomization successfull !" << std::endl;
	else
		std::cout << this->getTarget() << " robotomization failed !" << std::endl;
}