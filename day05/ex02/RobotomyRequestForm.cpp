#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request form", "default", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request form", target, 72, 45)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	_target = f._target;
	_sig = f._sig;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) : Form(f._name , f._target, f._gradeSign, f._gradeEx)
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