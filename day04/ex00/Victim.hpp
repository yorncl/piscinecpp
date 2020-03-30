#if !defined(VICTIM_HPP)
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
public:
	Victim(std::string);
	Victim(const Victim &) = default;
	Victim &operator=(const Victim &) = default;
	~Victim();
	std::string getName() const;
	virtual void getPolymorphed() const;
protected:
	std::string name;
};

std::ostream &operator<<(std::ostream &os, const Victim &s);
#endif // VICTIM_HPP
