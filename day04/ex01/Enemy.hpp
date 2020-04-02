#if !defined(ENEMY_HPP)
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
private:
	int hp;
	std::string const type;
public :
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif // ENEMY_HPP
