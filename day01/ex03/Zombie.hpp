#if !defined(ZOMBIE_HPP)
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
public:
	Zombie();
	Zombie(std::string type = "default", std::string name = "Jean-Random");
	Zombie(const Zombie &);
	Zombie &operator=(const Zombie &);
	~Zombie();

private:
	std::string name,
				type;
public:
	void	advert();	
};
#endif