#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "========= FRAGTRAP ==========" << std::endl;
	
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
	
	
	
	
	
	ScavTrap *st1 = new ScavTrap("Brigitte");
	ScavTrap st2("Bob");
	ScavTrap st3(st2);

	std::cout << "========= SCAVTRAP ==========" << std::endl;
	std::cout << "========= 1st Battery ==========" << std::endl;
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");
	// SHOULD BE OUT OF ENERGY
	st2.meleeAttack("ur mom");
	st2.meleeAttack("ur mom");

	std::cout << "========= 2nd Battery ==========" << std::endl;
	st3.challengeNewcomer();
	st3.challengeNewcomer();
	st3.challengeNewcomer();

	std::cout << "========= 3rd Battery ==========" << std::endl;
	st1->takeDamage(5);
	st1->takeDamage(10);
	st1->beRepaired(10);
	st1->takeDamage(150);
	st1->meleeAttack("Les rageux");
	st1->beRepaired(50);
	st1->meleeAttack("Les rageux");
	st1->rangedAttack("Les rageux");
	st1->takeDamage(150);
	st1->meleeAttack("Les rageux");
	st1->rangedAttack("Les rageux");
	delete st1;
	delete f1;
	return 0;
}
