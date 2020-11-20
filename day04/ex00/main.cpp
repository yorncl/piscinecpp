#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"

int main(void)
{
	std::cout << "-------- Constructor tests" << std::endl;
	{
		Sorcerer s("Bob","le bricoleur");
		Sorcerer s2(s);
		Sorcerer s("Dora", "l'exploratriice")
	}

	std::cout << std::endl << "-------- Subject tests ------------" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}