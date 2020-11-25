#if !defined(CHARACTER_HPP)
#define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include <iostream>
#include <string>

#define CHARACTER_MAX_AP 40	

class Character
{
private:
	std::string _name;
	int _ap;
	AWeapon *_weapon;

public:
	Character();
	Character(std::string const &name);
	Character(const Character&);
	Character& operator=(const Character&);
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
