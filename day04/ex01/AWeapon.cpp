#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &a) : _name(a._name), _apcost(a._apcost), _damage(a._damage)
{
}

AWeapon& AWeapon::operator=(const AWeapon& a)
{
	_name = a._name;
	_apcost = a._apcost;
	_damage = a._damage;
	return *this;
}

AWeapon::~AWeapon()
{
}

std::string const AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}

int AWeapon::getDamage() const
{
	return _damage;
}
