#if !defined(STORMTROOPER_HPP)
#define STORMTROOPER_HPP

#include "Enemy.hpp"
#include <string>
#include <iostream>

class StormTrooper : public Enemy
{
public:
    StormTrooper();
    StormTrooper(const StormTrooper &);
    StormTrooper &operator=(const StormTrooper &);
    virtual ~StormTrooper();
};

#endif // STORMTROOPER_HPP
