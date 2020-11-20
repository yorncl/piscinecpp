#if !defined(ENEMY_HPP)
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
private:
	int _hp;
	std::string _type;
public :
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &);
	Enemy& operator=(const Enemy &);
	virtual ~Enemy();
	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif // ENEMY_HPP
