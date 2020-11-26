#include "Form.hpp"

Form::Form() :_name("default"), _sig(false), _gradeSign(150), _gradeEx(150)
{
}

Form::Form(std::string name, std::string target, int gs, int gex) : _name(name), _target(target),_sig(false), _gradeSign(gs), _gradeEx(gex)
{
	if (gs < 1 || gex < 1)
		throw GradeTooHighException();
	if (gs > 150 || gex > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &f) : _name(f._name), _gradeSign(f._gradeSign), _gradeEx(f._gradeEx)
{
	_sig = f._sig;
}

Form &Form::operator=(const Form &f)
{
	// name is a constant
	// gradeSign is a constant
	// gradeEx is a constant
	_sig = f._sig;
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
	return _name;
}

int Form::getGradeSign() const
{
	return _gradeSign;
}

int Form::getGradeEx() const
{
	return _gradeEx;
}

bool Form::getSigned() const
{
	return _sig;
}

std::string Form::getTarget() const
{
	return _target;
}

void Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > _gradeSign)
		throw GradeTooLowException();
	_sig = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (_sig == false)
		throw NotSignedException();
	if (executor.getGrade() > _gradeEx)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form &f)
{
	os << f.getName() << ", signed:" << f.getSigned() << ", to sign:" << f.getGradeSign() << ", to ex:" << f.getGradeEx();
	return os;
}