#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "========= FRAGTRAP ==========" << std::endl;
	FragTrap f("Jar Jar Binks");
	f.vaulthunter_dot_exe("Separatists");
	f.beRepaired(15);
	std::cout << "========= SCAVTRAP ==========" << std::endl;
	ScavTrap s("Jar Jar Binks");
	s.challengeNewcomer();
	s.beRepaired(15);
	return 0;
}
