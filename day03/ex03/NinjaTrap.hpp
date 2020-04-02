#if !defined(NINJATRAP_HPP)
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap
{

public:
	NinjaTrap(std::string);
	NinjaTrap(const NinjaTrap &) = default;
	NinjaTrap &operator=(const NinjaTrap &) = default;
	~NinjaTrap();
	void ninjaShoebox(ScavTrap&);
	void ninjaShoebox(FragTrap&);
	void ninjaShoebox(NinjaTrap&);
};
#endif // SCAVTRAP_HPP