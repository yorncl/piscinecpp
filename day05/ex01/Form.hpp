#if !defined(FORM_HPP)
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:
	const std::string name;
	bool sig;
	const int gradeSign;
	const int gradeEx;
	struct GradeTooHighException : public std::exception
	{
		const char * what () const throw ();
	};
	struct GradeTooLowException : public std::exception
	{
		const char * what () const throw ();
	};
public:
	Form(std::string, int, int);
	Form(const Form &);
	Form &operator=(const Form &);
	~Form();
	std::string getName() const;
	int getGradeSign() const;
	int getGradeEx() const;
	bool getSigned() const;
	void beSigned(Bureaucrat& b);
};

std::ostream& operator<<(std::ostream&, Form&);
#endif // FORM_HPP
