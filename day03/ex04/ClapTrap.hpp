#if !defined(CLAPTRAP_HPP)
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ClapTrap
{
public:
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &);
	ClapTrap &operator=(const ClapTrap &);
	~ClapTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void addEnergy(int amount);
	void print();

protected:
	int _hit;
	int _maxHit;
	int _energy;
	int _maxEnergy;
	int _level;
	std::string _name;
	int _melee;
	int _ranged;
	int _armor;
};
#endif // CLAPTRAP_HPP
