#if !defined(BURAUCRAT_HPP)
#define BURAUCRAT_HPP

#include <string>
#include <iostream>
#include <ostream>

class Bureaucrat
{

private:
	const std::string _name;
	int _grade;
	struct GradeTooHighException : public std::exception
	{
		const char * what () const throw ();
	};
	struct GradeTooLowException : public std::exception
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
};

std::ostream& operator<<(std::ostream&, Bureaucrat&);

#endif // BURAUCRAT_HPP
