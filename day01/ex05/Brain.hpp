#if !defined(BRAIN_HPP)
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stdint.h>

class Brain
{
private:
	int _iq;
public:
	Brain(int iq);
	std::string	identify() const;
	~Brain();
};
#endif // BRAIN_HPP
