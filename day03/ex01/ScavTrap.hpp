#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
private:
	int hit;
	int maxHit;
	int energy;
	int maxEnergy;
	int level;
	std::string name;
	int melee;
	int ranged;
	int armor;

public:
	ScavTrap(std::string);
	ScavTrap(ScavTrap &&) = default;
	ScavTrap(const ScavTrap &) = default;
	ScavTrap &operator=(ScavTrap &&) = default;
	ScavTrap &operator=(const ScavTrap &) = default;
	~ScavTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void addEnergy(int amount);
	void challengeNewcomer();
};
#endif // SCAVTRAP_HPP