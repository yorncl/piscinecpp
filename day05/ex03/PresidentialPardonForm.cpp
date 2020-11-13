#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon form", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : Form(f.name , f.target, f.gradeSign, f.gradeEx)
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	target = f.target;
	sig = f.sig;
	return *this;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::execute(executor);
	}
	catch(const std::exception& e)
	{
		throw;
	}
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox !" << std::endl;
}