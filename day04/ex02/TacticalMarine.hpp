#if !defined(TACTICALMARINE_HPP)
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	TacticalMarine &operator=(const TacticalMarine &);
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	virtual ~TacticalMarine();

private:
	
};


#endif // TACTICALMARINE_HPP
