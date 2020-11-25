#if !defined(AWEAPON)
#define AWEAPON

#include <string>

class AWeapon
{

public:
	AWeapon();
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &);
	AWeapon& operator=(const AWeapon &);
	virtual ~AWeapon();
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

private:
	std::string _name;
	int _apcost;
	int _damage;
};
#endif // AWEAPON
