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
	RadScorpion(const RadScorpion &) = default;
	RadScorpion &operator=(const RadScorpion &) = default;
	~RadScorpion();
};

#endif // RADSCORPION_HPP
