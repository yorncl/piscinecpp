#if !defined(SHRUBBERYCREATIONFORM_HPP)
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	virtual ~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;
};


#endif // SHRUBBERYCREATIONFORM_HPP
