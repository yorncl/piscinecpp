#if !defined(FORM_HPP)
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:
	const std::string _name;
	bool _sig;
	const int _gradeSign;
	const int _gradeEx;
	class GradeTooHighException : public std::exception
	{
		const char * what () const throw ();
	};
	class GradeTooLowException : public std::exception
	{
		const char * what () const throw ();
	};
public:
	Form();
	Form(std::string name, int gs, int gex);
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
