#include "FragTrap.hpp"
#include <ctime>


int main(void)
{


	std::srand(std::time(0)); // init random seed

	std::cout << "========= Basic constructor =========" << std::endl;
	FragTrap *f1 = new FragTrap("Brigitte");
	(*f1).print();
	FragTrap f2("Bob");
	f2.print();
	std::cout << "========= Copy constructor =========" << std::endl;
	FragTrap f3(f2);
	f3.print();
	std::cout << "========= Assignment Operator =========" << std::endl;
	FragTrap f4 = *f1;
	f4.print();


	std::cout << "========= Melee ==========" << std::endl;
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");
	// SHOULD BE OUT OF ENERGY
	f2.meleeAttack("Bandit");
	f2.meleeAttack("Bandit");

	std::cout << "========= COPY ==========" << std::endl;

	// SHOULD BE OUT OF ENERGY
	f3.vaulthunter_dot_exe("Zer0");
	f3.vaulthunter_dot_exe("Zer0");
	f3.addEnergy(50);
	// SHOULD BE GOOD
	f3.vaulthunter_dot_exe("Zer0");
	f3.vaulthunter_dot_exe("Zer0");
	// SHOULD BE OUT OF ENERGY
	f3.vaulthunter_dot_exe("Zer0");

	std::cout << "========= 3rd Battery ==========" << std::endl;
	// SHOULD BE OUT OF ENERGY
	f4.vaulthunter_dot_exe("Psycho");
	f4.vaulthunter_dot_exe("Psycho");
	f4.vaulthunter_dot_exe("Psycho");
	f4.vaulthunter_dot_exe("Psycho");
	f4.vaulthunter_dot_exe("Psycho");

	std::cout << "========= 4th Battery ==========" << std::endl;
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
