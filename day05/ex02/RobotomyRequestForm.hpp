#if !defined(ROBOTOMYREQUESTFORM_HPP)
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(const RobotomyRequestForm &) = default;
	RobotomyRequestForm &operator=(const RobotomyRequestForm &) = default;
	~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
};


#endif // ROBOTOMYREQUESTFORM_HPP
