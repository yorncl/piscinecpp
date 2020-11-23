#if !defined(NINJATRAP_HPP)
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap
{

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