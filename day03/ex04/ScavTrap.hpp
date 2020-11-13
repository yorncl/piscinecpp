#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{

public:
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &);
	ScavTrap &operator=(const ScavTrap &);
	~ScavTrap();
	void challengeNewcomer();
};
#endif // SCAVTRAP_HPP