#if !defined(RADSCORPION_HPP)
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string>

class RadScorpion : public Enemy
{
private:
public:
	RadScorpion();
	RadScorpion(const RadScorpion &);
	RadScorpion &operator=(const RadScorpion &);
	~RadScorpion();
};

#endif // RADSCORPION_HPP
