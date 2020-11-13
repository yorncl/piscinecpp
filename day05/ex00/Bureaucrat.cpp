
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g < 1)
		throw GradeTooHighException();
	if (g > 150)
		throw GradeTooLowException();
	grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : name(b.name)
{
	grade = b.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
	// name is a constant
	grade = b.grade;
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
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::inc()
{
	grade--;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::dec()
{
	grade++;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
