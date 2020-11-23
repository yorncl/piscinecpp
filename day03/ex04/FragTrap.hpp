#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>
class FragTrap : public virtual ClapTrap
{
protected:
	static const int init_hit;
	static const int init_maxHit;
	static const int init_energy;
	static const int init_maxEnergy;
	static const int init_level;
	static const int init_melee;
	static const int init_ranged;
	static const int init_armor;
public:
	FragTrap(std::string);
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap &);
	~FragTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const & target);
};
#endif // FRAGTRAP_HPP