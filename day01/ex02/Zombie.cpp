#include "Zombie.hpp"

Zombie::~Zombie() {
    
}

Zombie::Zombie(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss ..." << std::endl; 
}
