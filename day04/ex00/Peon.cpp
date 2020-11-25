#include "Peon.hpp"

Peon::Peon() : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string n) : Victim(n)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon&p) : Victim(p._name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon& Peon::operator=(const Peon &p)
{
	_name = p._name;
	return *this;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}