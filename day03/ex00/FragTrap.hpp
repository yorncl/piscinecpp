#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
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
	FragTrap(std::string);
	FragTrap(FragTrap &&) = default;
	FragTrap(const FragTrap &) = default;
	FragTrap &operator=(FragTrap &&) = default;
	FragTrap &operator=(const FragTrap &) = default;
	~FragTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void addEnergy(int amount);
	void vaulthunter_dot_exe(std::string const & target);
};
#endif // FRAGTRAP_HPP