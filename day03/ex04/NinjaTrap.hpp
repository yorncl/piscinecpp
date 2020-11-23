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
	static int const init_hit;
	static int const init_maxHit;
	static int const init_energy;
	static int const init_maxEnergy;
	static int const init_level;
	static int const init_melee;
	static int const init_ranged;
	static int const init_armor;
public:
	NinjaTrap(std::string);
	NinjaTrap(const NinjaTrap &);
	NinjaTrap &operator=(const NinjaTrap &);
	~NinjaTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void ninjaShoebox(ScavTrap&);
	void ninjaShoebox(FragTrap&);
	void ninjaShoebox(NinjaTrap&);
	void ninjaShoebox(ClapTrap&);
};
#endif // SCAVTRAP_HPP