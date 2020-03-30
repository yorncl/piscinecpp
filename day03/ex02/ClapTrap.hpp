#if !defined(CLAPTRAP_HPP)
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &) = default;
	ClapTrap &operator=(const ClapTrap &) = default;
	~ClapTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void addEnergy(int amount);

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
