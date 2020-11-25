#include "Victim.hpp"

Victim::Victim()
{
	_name = "default";
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}


Victim::Victim(std::string n)
{
	_name = n;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &v)
{
	_name = v._name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim& Victim::operator=(const Victim &v)
{
	_name = v._name;
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
	return _name;
}

std::ostream &operator<<(std::ostream &os, const Victim &s)
{
	os << "I'm " << s.getName() << " and I like otters!" << std::endl;
	return os;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}