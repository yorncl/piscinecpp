#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap
{
private:
	int _hit;
	int _maxHit;
	int _energy;
	int _maxEnergy;
	int _level;
	std::string _name;
	int _melee;
	int _ranged;
	int _armor;

public:
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &);
	ScavTrap &operator=(const ScavTrap &);
	~ScavTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void addEnergy(int amount);
	void challengeNewcomer();
	void print();
};
#endif // SCAVTRAP_HPP