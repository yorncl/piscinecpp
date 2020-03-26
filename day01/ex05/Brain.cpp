#include "Brain.hpp"

Brain::Brain(/* args */)
{
}

std::string	Brain::identify()
{
	std::stringstream s;
	s << "0x" << this;
	return s.str();
}

std::string	Brain::identify() const
{
	std::stringstream s;
	s << "0x" << this;
	return s.str();
}