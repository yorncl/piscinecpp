#include "Victim.hpp"

Victim::Victim(std::string n)
{
	name = n;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
	return name;
}

std::ostream &operator<<(std::ostream &os, const Victim &s)
{
	os << "I'm " << s.getName() << " and I like otters!" << std::endl;
	return os;
}

void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}