#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
protected:
	static int const init_hit = 100;
	static int const init_maxHit = 100;
	static int const init_energy = 50;
	static int const init_maxEnergy = 50;
	static int const init_level = 1;
	static int const init_melee = 20;
	static int const init_ranged = 15;
	static int const init_armor = 3;
public:
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &) = default;
	ScavTrap &operator=(const ScavTrap &) = default;
	~ScavTrap();
	void challengeNewcomer();
};
#endif // SCAVTRAP_HPP