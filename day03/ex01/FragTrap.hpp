#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class FragTrap
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
	FragTrap(std::string);
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap &);
	~FragTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void addEnergy(int amount);
	void vaulthunter_dot_exe(std::string const & target);
	void print();
};
#endif // FRAGTRAP_HPP