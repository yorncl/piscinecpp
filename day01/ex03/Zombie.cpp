#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
}

void	Zombie::advert()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss ..." << std::endl; 
}