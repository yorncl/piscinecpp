#if !defined(SUPERTRAP_HPP)
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
protected:
	static int const init_level = 1;
public:
	SuperTrap(std::string);
	SuperTrap(const SuperTrap &) = default;
	SuperTrap &operator=(const SuperTrap &) = default;
	~SuperTrap();
	void printAttributes();
	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
};
#endif