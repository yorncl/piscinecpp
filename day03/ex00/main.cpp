#include "FragTrap.hpp"

int main(void)
{
	FragTrap *f1 = new FragTrap("Brigitte");
	FragTrap f2("Bob");
	FragTrap f3(f2);

	std::cout << "========= 1st Battery ==========" << std::endl;
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");
	// SHOULD BE OUT OF ENERGY
	f2.meleeAttack("ur mom");
	f2.meleeAttack("ur mom");

	std::cout << "========= 2nd Battery ==========" << std::endl;
	f3.vaulthunter_dot_exe("Zawarudo");
	return 0;
}
