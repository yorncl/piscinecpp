#if !defined(PEON_HPP)
#define PEON_HPP

#include "Victim.hpp"
#include <iostream>
#include <string>

class Peon : public Victim
{
public:
	Peon(std::string);
	Peon(const Peon &) = default;
	Peon &operator=(const Peon &) = default;
	~Peon();
	void getPolymorphed() const;

private:
	
};
#endif // PEON_HPP
