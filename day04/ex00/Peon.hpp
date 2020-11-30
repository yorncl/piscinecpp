#if !defined(PEON_HPP)
#define PEON_HPP

#include "Victim.hpp"
#include <iostream>
#include <string>

class Peon : public Victim
{
public:
	Peon();
	Peon(std::string);
	Peon(const Peon &);
	Peon &operator=(const Peon &);
	virtual ~Peon();
	void getPolymorphed() const;

private:
	
};
#endif // PEON_HPP
