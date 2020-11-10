#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int main(void)
{
	std::cout << "=======SIMPLE TESTS=======" << std::endl;
	{
		std::cout << "====> size = 5" << std::endl;
		ZombieHorde myhorde(5);
		myhorde.announce();
	}
	{
		std::cout << "====> size = 5" << std::endl;
		ZombieHorde myhorde(15);
		myhorde.announce();
	}
	
	std::cout << "=======ERROR TESTS=======" << std::endl;
	{
		std::cout << "====> size = 0" << std::endl;
		try
		{
			ZombieHorde myhorde(0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "====> size = -666" << std::endl;
		try
		{
			ZombieHorde myhorde(-666);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
