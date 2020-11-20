#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t)
{
	_name = n;
	_title = t;
	std::cout << _name << ", " << _title << ", "
			  << "is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &s)
{
	_name = s._name;
	_title = s._title;
}

Sorcerer& Sorcerer::operator=(const Sorcerer &s)
{
	_name = s._name;
	_title = s._title;
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &s)
{
	os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}

std::string Sorcerer::getName() const
{
	return _name;
}

std::string Sorcerer::getTitle() const
{
	return _title;
}

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}
