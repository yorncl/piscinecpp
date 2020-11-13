#if !defined(FORM_HPP)
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
protected:
	const std::string name;
	std::string target;
	bool sig;
	const int gradeSign;
	const int gradeEx;

protected:
	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
	struct NotSignedException : public std::exception
	{
		const char *what() const throw();
	};

public:
	Form(std::string, std::string, int, int);
	Form(const Form &);
	Form &operator=(const Form &);
	virtual ~Form() = 0;
	std::string getName() const;
	int getGradeSign() const;
	int getGradeEx() const;
	bool getSigned() const;
	std::string getTarget() const;
	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &, Form &);
#endif // FORM_HPP
