#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t)
{
	name = n;
	title = t;
	std::cout << name << ", " << title << ", "
			  << "is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &s)
{
	os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}

std::string Sorcerer::getName() const
{
	return name;
}

std::string Sorcerer::getTitle() const
{
	return title;
}

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}
