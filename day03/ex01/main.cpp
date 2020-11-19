#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <ctime>
#include <string.h>

int main(int ac, char** av)
{
	
	if (ac != 2)
	{
		std::cout << "Usage: ./a.out [frag|scav]" << std::endl;
		return 0;
	}

	if (strcmp(av[1], "scav") == 0)
	{
		std::srand(std::time(0)); // init random seed

		std::cout << std::endl << "========= Basic constructor =========" << std::endl;
		ScavTrap *f1 = new ScavTrap("Brigitte");
		(*f1).print();
		ScavTrap f2("Bob");
		f2.print();
		std::cout << std::endl << "========= Copy constructor =========" << std::endl;
		ScavTrap f3(f2);
		f3.print();
		std::cout << std::endl << "========= Assignment Operator =========" << std::endl;
		f1->addEnergy(-10);
		ScavTrap f4("Diane");
		f1->meleeAttack("Test");
		f4 = *f1;
		f4.print();


		std::cout << std::endl << "========= Melee ==========" << std::endl;
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

		std::cout << std::endl << "========= Ranged ==========" << std::endl;
		f3.rangedAttack("Zer0");
		f3.rangedAttack("Zer0");
		f3.rangedAttack("Zer0");
		f3.rangedAttack("Zer0");
		// SHOULD BE OUT OF ENERGY
		f3.rangedAttack("Zer0");

		std::cout << std::endl << "========= Take Damage/Be repaired ==========" << std::endl;
		f3.takeDamage(3);
		f3.addEnergy(500);
		f3.takeDamage(10);
		f3.rangedAttack("Zer0");
		f3.takeDamage(1000);
		// SHOULD NOT BE ABLE TO DO THIS
		f3.rangedAttack("Zer0");
		f3.print();
		f3.beRepaired(500);
		f3.rangedAttack("Zer0");

		std::cout << std::endl << "========= Vaulthunter ==========" << std::endl;
		f4.challengeNewcomer();
		f4.challengeNewcomer();
		f4.challengeNewcomer();
		f4.challengeNewcomer();
		f4.challengeNewcomer();

		std::cout << std::endl << "========= Mixed tests ==========" << std::endl;
		f1->takeDamage(5);
		f1->takeDamage(10);
		f1->beRepaired(10);
		f1->takeDamage(150);
		f1->meleeAttack("le capitalisme");
		f1->beRepaired(50);
		f1->meleeAttack("le capitalisme");
		f1->rangedAttack("le capitalisme");
		f1->takeDamage(150);
		f1->meleeAttack("le gang des requins");
		f1->rangedAttack("le gang des requins");
		delete f1;
	}
	else if (strcmp(av[1], "frag") == 0)
	{
			std::srand(std::time(0)); // init random seed

		std::cout << std::endl << "========= Basic constructor =========" << std::endl;
		FragTrap *f1 = new FragTrap("Brigitte");
		(*f1).print();
		FragTrap f2("Bob");
		f2.print();
		std::cout << std::endl << "========= Copy constructor =========" << std::endl;
		FragTrap f3(f2);
		f3.print();
		std::cout << std::endl << "========= Assignment Operator =========" << std::endl;
		FragTrap f4("Diane");
		f1->meleeAttack("Test");
		f4 = *f1;
		f4.print();


		std::cout << std::endl << "========= Melee ==========" << std::endl;
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

		std::cout << std::endl << "========= Ranged ==========" << std::endl;
		f3.rangedAttack("Zer0");
		f3.rangedAttack("Zer0");
		f3.rangedAttack("Zer0");
		f3.rangedAttack("Zer0");
		// SHOULD BE OUT OF ENERGY
		f3.rangedAttack("Zer0");

		std::cout << std::endl << "========= Take Damage/Be repaired ==========" << std::endl;
		f3.addEnergy(500);
		f3.takeDamage(10);
		f3.rangedAttack("Zer0");
		f3.takeDamage(1000);
		// SHOULD NOT BE ABLE TO DO THIS
		f3.rangedAttack("Zer0");
		f3.print();
		f3.beRepaired(500);
		f3.rangedAttack("Zer0");

		std::cout << std::endl << "========= Vaulthunter ==========" << std::endl;
		f4.vaulthunter_dot_exe("Psycho");
		f4.vaulthunter_dot_exe("Psycho");
		f4.vaulthunter_dot_exe("Psycho");
		f4.vaulthunter_dot_exe("Psycho");
		// SHOULD BE OUT OF ENERGY
		f4.vaulthunter_dot_exe("Psycho");

		std::cout << std::endl << "========= Mixed tests ==========" << std::endl;
		f1->takeDamage(5);
		f1->takeDamage(10);
		f1->beRepaired(10);
		f1->takeDamage(150);
		f1->meleeAttack("le capitalisme");
		f1->beRepaired(50);
		f1->meleeAttack("le capitalisme");
		f1->rangedAttack("le capitalisme");
		f1->vaulthunter_dot_exe("un déferlement de rageux");
		f1->vaulthunter_dot_exe("un déferlement de rageux");
		f1->vaulthunter_dot_exe("un déferlement de rageux");
		f1->vaulthunter_dot_exe("un déferlement de rageux");
		f1->takeDamage(150);
		f1->vaulthunter_dot_exe("un déferlement de rageux");
		f1->meleeAttack("le gang des requins");
		f1->rangedAttack("le gang des requins");
		delete f1;
	}
	else
	{
		std::cout << "Usage: ./a.out [frag|scav]" << std::endl;
	}
	

	return 0;
}
