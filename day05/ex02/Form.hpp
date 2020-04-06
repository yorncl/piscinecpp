#if !defined(FORM_HPP)
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	std::string target;
	bool sig;
	const int gradeSign;
	const int gradeEx;

protected:
	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "GradeTooHighException";
		}
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "GradeTooLowException";
		}
	};
	struct NotSignedException : public std::exception
	{
		const char *what() const throw()
		{
			return "NotSignedException";
		}
	};

public:
	Form(std::string, std::string, int, int);
	Form(const Form &) = default;
	Form &operator=(const Form &) = default;
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
