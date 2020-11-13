#if !defined(SUPERTRAP_HPP)
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string);
	SuperTrap(const SuperTrap &);
	SuperTrap &operator=(const SuperTrap &);
	~SuperTrap();
	void printAttributes();
	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
};
#endif