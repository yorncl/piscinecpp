#include "Pony.hpp"

Pony::Pony(std::string color, int age)
{
	this->color = color;
	this->age = age;
}

Pony::~Pony()
{
}

void	Pony::talk()
{
	std::cout << "I am " << this->color << " and " << this->age << " years old" << std::endl;
}
