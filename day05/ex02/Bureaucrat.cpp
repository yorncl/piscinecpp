
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string n, int g) : _name(n)
{
	if (g < 1)
		throw GradeTooHighException();
	if (g > 150)
		throw GradeTooLowException();
	_grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name)
{
	_grade = b._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
	_grade = b._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const char * Bureaucrat::GradeTooHighException::what () const throw ()
{
	 return "GradeTooHighException";
}

const char * Bureaucrat::GradeTooLowException::what () const throw ()
{
	return "GradeTooLowException";
}


std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::inc()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::dec()
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signs " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cannot execute " << form.getName() << ": " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}