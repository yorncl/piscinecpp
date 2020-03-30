#if !defined(SORCERER_HPP)
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string, std::string);
	Sorcerer(const Sorcerer &) = default;
	Sorcerer &operator=(const Sorcerer &) = default;
	~Sorcerer();
	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &) const;

private:
	std::string name, title;
};

std::ostream &operator<<(std::ostream &, const Sorcerer &);
#endif // SORCERER_HPP
