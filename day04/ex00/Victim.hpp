#if !defined(VICTIM_HPP)
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
public:
	Victim();
	Victim(std::string name);
	Victim(const Victim &);
	Victim &operator=(const Victim &);
	~Victim();
	std::string getName() const;
	virtual void getPolymorphed() const;
protected:
	std::string _name;
};

std::ostream &operator<<(std::ostream &os, const Victim &s);
#endif // VICTIM_HPP
