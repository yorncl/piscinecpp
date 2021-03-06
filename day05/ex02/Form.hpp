#if !defined(FORM_HPP)
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
protected:
	const std::string _name;
	std::string _target;
	bool _sig;
	const int _gradeSign;
	const int _gradeEx;

protected:
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
	class NotSignedException : public std::exception
	{
		const char *what() const throw();
	};

public:
	Form();
	Form(std::string name, std::string target, int gs, int gex);
	Form(const Form &);
	Form &operator=(const Form &);
	virtual ~Form();
	std::string getName() const;
	int getGradeSign() const;
	int getGradeEx() const;
	bool getSigned() const;
	std::string getTarget() const;
	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &, Form &);
#endif // FORM_HPP
