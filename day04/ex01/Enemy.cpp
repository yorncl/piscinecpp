#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(const Enemy& e) : _hp(e._hp), _type(e._type)
{

}

Enemy& Enemy::operator=(const Enemy &e)
{
	_hp = e._hp;
	_type = e._type;
	return *this;
}

Enemy::~Enemy()
{
}

std::string const Enemy::getType() const
{
	return _type;
}

int Enemy::getHP() const
{
	return _hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	_hp -= damage;
	if (_hp < 0)
		delete this;
}
