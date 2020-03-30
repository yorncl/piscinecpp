#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public virtual ClapTrap
{
protected:
	static const int init_hit = 100;
	static const int init_maxHit = 100;
	static const int init_energy = 100;
	static const int init_maxEnergy = 100;
	static const int init_level = 1;
	static const int init_melee = 30;
	static const int init_ranged = 20;
	static const int init_armor = 5;
public:
	FragTrap(std::string);
	FragTrap(const FragTrap &) = default;
	FragTrap &operator=(const FragTrap &) = default;
	~FragTrap();
	void vaulthunter_dot_exe(std::string const & target);
	void rangedAttack(std::string const &target);
};
#endif // FRAGTRAP_HPP