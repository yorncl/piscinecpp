#if !defined(PONY_HPP)
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
private:
	std::string color;
	int age;
public:
	Pony(std::string color,	int age);
	void	talk();
};

#endif
