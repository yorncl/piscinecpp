#if !defined(SHRUBBERYCREATIONFORM_HPP)
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(const ShrubberyCreationForm &) = default;
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &) = default;
	~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;
};


#endif // SHRUBBERYCREATIONFORM_HPP
