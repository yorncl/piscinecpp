#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(const PresidentialPardonForm &) = default;
	PresidentialPardonForm &operator=(const PresidentialPardonForm &) = default;
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
};


#endif // PRESIDENTIALPARDONFORM_HPP
