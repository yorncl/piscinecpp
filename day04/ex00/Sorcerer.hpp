#if !defined(SORCERER_HPP)
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &);
	Sorcerer &operator=(const Sorcerer &);
	virtual ~Sorcerer();
	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &) const;

private:
	Sorcerer();
	std::string _name, _title;
};

std::ostream &operator<<(std::ostream &, const Sorcerer &);
#endif // SORCERER_HPP
