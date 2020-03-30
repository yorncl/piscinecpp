#if !defined(CLAPTRAP_HPP)
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(ClapTrap &&) = default;
	ClapTrap(const ClapTrap &) = default;
	ClapTrap &operator=(ClapTrap &&) = default;
	ClapTrap &operator=(const ClapTrap &) = default;
	~ClapTrap();

protected:
	int hit;
	int maxHit;
	int energy;
	int maxEnergy;
	int level;
	std::string name;
	int melee;
	int ranged;
	int armor;
};
#endif // CLAPTRAP_HPP
