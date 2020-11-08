#include "Brain.hpp"

Brain::Brain(int iq)
{
	_iq = iq;
}

std::string	Brain::identify() const
{
	std::stringstream s;
	s << "0x" << std::uppercase << std::hex << uintptr_t(this);
	return s.str();
}
