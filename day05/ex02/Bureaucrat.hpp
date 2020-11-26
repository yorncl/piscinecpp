#if !defined(BURAUCRAT_HPP)
#define BURAUCRAT_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

private:
	const std::string _name;
	int _grade;
	class GradeTooHighException : public std::exception
	{
		const char * what () const throw ();
	};
	class GradeTooLowException : public std::exception
	{
		const char * what () const throw ();
	};
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void inc();
	void dec();
	void signForm(Form &f);
	void executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream&, Bureaucrat&);

#endif // BURAUCRAT_HPP
