#include "FragTrap.hpp"

int main(void)
{
	FragTrap *f1 = new FragTrap("Brigitte");
	FragTrap f2("Bob");
	FragTrap f3(f2);

	//Life tests 
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
	f3.vaulthunter_dot_exe("Zawarudo");
	f3.vaulthunter_dot_exe("Zawarudo");
	f3.vaulthunter_dot_exe("Zawarudo");
	// SHOULD BE OUT OF ENERGY
	f3.vaulthunter_dot_exe("Zawarudo");

	std::cout << "========= 3rd Battery ==========" << std::endl;
	f1->takeDamage(5);
	f1->takeDamage(10);
	f1->beRepaired(10);
	f1->takeDamage(150);
	f1->meleeAttack("Les rageux");
	f1->beRepaired(50);
	f1->meleeAttack("Les rageux");
	f1->rangedAttack("Les rageux");
	f1->vaulthunter_dot_exe("L'austérité dans les campagnes françaises");
	f1->vaulthunter_dot_exe("L'austérité dans les campagnes françaises");
	f1->vaulthunter_dot_exe("L'austérité dans les campagnes françaises");
	f1->vaulthunter_dot_exe("L'austérité dans les campagnes françaises");
	f1->takeDamage(150);
	f1->vaulthunter_dot_exe("L'austérité dans les campagnes françaises");
	f1->meleeAttack("Les rageux");
	f1->rangedAttack("Les rageux");
	delete f1;
	return 0;
}
