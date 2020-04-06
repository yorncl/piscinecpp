#if !defined(BURAUCRAT_HPP)
#define BURAUCRAT_HPP

#include <string>
#include <iostream>
#include <ostream>

class Bureaucrat
{

private:
	const std::string name;
	int grade;
	struct GradeTooHighException : public std::exception
	{
		const char * what () const throw ()
		{
			return "GradeTooHighException";
		}
	};
	struct GradeTooLowException : public std::exception
	{
		const char * what () const throw ()
		{
			return "GradeTooLowException";
		}
	};
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &) = default;
	Bureaucrat &operator=(const Bureaucrat &) = default;
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void inc();
	void dec();
};

std::ostream& operator<<(std::ostream&, Bureaucrat&);

#endif // BURAUCRAT_HPP
