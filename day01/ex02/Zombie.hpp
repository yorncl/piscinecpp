#if !defined(ZOMBIE_HPP)
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
public:
	Zombie(std::string type = "default", std::string name = "Jean-Random");
	~Zombie();

private:
	std::string name,
				type;
public:
	void	announce();	
};
#endif