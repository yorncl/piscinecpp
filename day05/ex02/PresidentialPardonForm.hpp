#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
};


#endif // PRESIDENTIALPARDONFORM_HPP
