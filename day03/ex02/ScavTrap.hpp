#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &) = default;
	ScavTrap &operator=(const ScavTrap &) = default;
	~ScavTrap();
	void challengeNewcomer();
};
#endif // SCAVTRAP_HPP