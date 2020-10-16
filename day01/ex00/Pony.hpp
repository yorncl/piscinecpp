#if !defined(PONY_HPP)
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
public:
	Pony(std::string color,	int age);
	Pony(Pony &&) = default;
	Pony(const Pony &) = default;
	Pony &operator=(Pony &&) = default;
	Pony &operator=(const Pony &) = default;
	~Pony();

private:
	std::string color;
	int age;
public:
	void	talk();
};
#endif
