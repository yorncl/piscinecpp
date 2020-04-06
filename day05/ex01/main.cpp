#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void formInitTest(int a, int b)
{
	std::cout << a << " and " << b << " ===> ";
	try
	{
		Form f1("John", a, b);
		std::cout << "Valid input" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Wrong input: " << e.what() << std::endl;
	}
}

int main(void)
{
	std::cout << "==== Bureaucrat ====" << std::endl;
	try
	{
		Bureaucrat b("John", -52);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error 1 :" << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("John", 152);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error 1 :" << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("John", 1);
		b.inc();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error 3 :" << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("John", 150);
		b.dec();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error 4 :" << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("John", 69);
		std::cout << b.getName() << " Before " << b.getGrade() << std::endl;
		b.dec();
		std::cout << b.getName() << " After dec " << b.getGrade() << std::endl;
		b.inc();
		std::cout << b.getName() << " After inc " << b.getGrade() << std::endl;
		std::cout << b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "This should not print :" << e.what() << std::endl;
	}

	std::cout << "==== Form ====" << std::endl;
	Bureaucrat b("John", 10);

	formInitTest(-150, 1);
	formInitTest(1550, 1);
	formInitTest(100, 1);
	formInitTest(1, -150);
	formInitTest(1, 1550);
	formInitTest(1, 100);

	Form f1("f1", 5, 5);
	Form f2("f2", 15, 5);
	Form f3("f2", 10, 5);

	try
	{
		b.signForm(f1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		b.signForm(f2);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "f3 Before " << f3.getSigned() << std::endl;
	b.signForm(f3);
	std::cout << "f3 After " << f3.getSigned() << std::endl;
	return 0;
}
