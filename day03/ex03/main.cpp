#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "========= FRAGTRAP ==========" << std::endl;
	FragTrap f("Jar Jar Binks");
	f.vaulthunter_dot_exe("Separatists");
	f.beRepaired(15);
	std::cout << "========= SCAVTRAP ==========" << std::endl;
	ScavTrap s("Han Solo");
	s.challengeNewcomer();
	s.beRepaired(15);
	std::cout << "========= NINJATRAP ==========" << std::endl;
	NinjaTrap n("Chewbacca");
	n.ninjaShoebox(f);
	n.ninjaShoebox(s);
	n.ninjaShoebox(n);
	n.beRepaired(15);
	return 0;
}
