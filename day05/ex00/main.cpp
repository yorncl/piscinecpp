#include <ostream>
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "========== Constructors errors ========" << std::endl;
	try
	{
		Bureaucrat b("John", -52);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error 1 :" << e.what() << '\n';
	}
	try
	{
		Bureaucrat b("John", 152);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error 1 :" << e.what() << '\n';
	}
	try
	{
		Bureaucrat b("John", 1);
		b.inc();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error 3 :" << e.what() << '\n';
	}
	try
	{
		Bureaucrat b("John", 150);
		b.dec();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error 4 :" << e.what() << '\n';
	}
	{
		std::cout << "========== Copy constructor and assignation ========" << std::endl;
		Bureaucrat b("alphonse", 56);
		Bureaucrat b2(b);
		Bureaucrat b3("test", 22);
		b3 = b;
		std::cout << b << std::endl;
		std::cout << b2 << std::endl;
		std::cout << b3 << std::endl;
	}

	std::cout << "========= Simple test =========" << std::endl;
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
	catch(const std::exception& e)
	{
		std::cerr << "This should not print :" << e.what() << '\n';
	}
std::cout << "========= inc dec error test =========" << std::endl;
	try
	{
		Bureaucrat b("John", 1);
		b.inc();
	}
	catch(const std::exception& e)
	{
		std::cerr << "This should print : " << e.what() << '\n';
	}
	try
	{
		Bureaucrat b("John", 150);
		b.dec();
	}
	catch(const std::exception& e)
	{
		std::cerr << "This should print : " << e.what() << '\n';
	}
	return 0;
}
