#if !defined(CHARACTER_HPP)
#define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include <iostream>
#include <string>

class Character
{
private:
	std::string const name;
	int ap;
	AWeapon *weapon;

public:
	Character(std::string const &name);
	virtual ~Character();
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string const getName() const;
	int getAp() const;
	AWeapon* getWeapon() const;
};

std::ostream &operator<<(std::ostream&, Character&);
#endif // CHARACTER_HPP
