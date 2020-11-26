#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon form", "default", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon form", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : Form(f._name , f._target, f._gradeSign, f._gradeEx)
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	_target = f._target;
	_sig = f._sig;
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