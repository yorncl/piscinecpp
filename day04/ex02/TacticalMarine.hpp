#if !defined(TACTICALMARINE_HPP)
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &) = default;
	TacticalMarine &operator=(const TacticalMarine &) = default;
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	~TacticalMarine();

private:
	
};


#endif // TACTICALMARINE_HPP
