#if !defined(SUPERMUTANT_HPP)
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string>

class SuperMutant : public Enemy
{
private:

public:
	SuperMutant();
	SuperMutant(const SuperMutant &);
	SuperMutant &operator=(const SuperMutant &);
	~SuperMutant();
	void takeDamage(int);
};

#endif // SUPERMUTANT_HPP
