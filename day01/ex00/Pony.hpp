#if !defined(PONY_HPP)
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
public:
	Pony(std::string color,	int age);
	Pony(const Pony &);
	~Pony();

private:
	std::string color;
	int age;
public:
	void	talk();
};
#endif
