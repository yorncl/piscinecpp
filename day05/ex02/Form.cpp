#include "Form.hpp"

Form::Form(std::string name, std::string target, int gs, int gex) : name(name), target(target),sig(false), gradeSign(gs), gradeEx(gex)
{
	if (gs < 1 || gex < 1)
		throw GradeTooHighException();
	if (gs > 150 || gex > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &f) : name(f.name), gradeSign(f.gradeSign), gradeEx(f.gradeEx)
{
	sig = f.sig;
}

Form &Form::operator=(const Form &f)
{
	// name is a constant
	// gradeSign is a constant
	// gradeEx is a constant
	sig = f.sig;
	return *this;
}

Form::~Form()
{
}

const char * Form::GradeTooHighException::what () const throw ()
{
	 return "GradeTooHighException";
}

const char * Form::GradeTooLowException::what () const throw ()
{
	return "GradeTooLowException";
}

const char * Form::NotSignedException::what () const throw ()
{
	return "NotSignedException";
}

std::string Form::getName() const
{
	return name;
}

int Form::getGradeSign() const
{
	return gradeSign;
}

int Form::getGradeEx() const
{
	return gradeEx;
}

bool Form::getSigned() const
{
	return sig;
}

std::string Form::getTarget() const
{
	return target;
}

void Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > gradeSign)
		throw GradeTooLowException();
	sig = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (sig == false)
		throw NotSignedException();
	if (executor.getGrade() > gradeEx)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form &f)
{
	os << f.getName() << ", signed:" << f.getSigned() << ", to sign:" << f.getGradeSign() << ", to ex:" << f.getGradeEx();
	return os;
}