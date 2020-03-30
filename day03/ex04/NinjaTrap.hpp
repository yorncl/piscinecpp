#if !defined(NINJATRAP_HPP)
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

class NinjaTrap : public virtual ClapTrap
{
protected:
	static int const init_hit = 60;
	static int const init_maxHit = 60;
	static int const init_energy = 120;
	static int const init_maxEnergy = 120;
	static int const init_level = 1;
	static int const init_melee = 60;
	static int const init_ranged = 5;
	static int const init_armor = 0;
public:
	NinjaTrap(std::string);
	NinjaTrap(const NinjaTrap &) = default;
	NinjaTrap &operator=(const NinjaTrap &) = default;
	~NinjaTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void ninjaShoebox(ScavTrap&);
	void ninjaShoebox(FragTrap&);
	void ninjaShoebox(NinjaTrap&);
};
#endif // SCAVTRAP_HPP