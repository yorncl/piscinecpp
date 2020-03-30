#if !defined(AWEAPON)
#define AWEAPON

#include <string>

class AWeapon
{
private:
	const std::string name;
	const int apcost;
	const int damage;
public:
	AWeapon(std::string const &name, int apcost, int damage);
	virtual ~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};
#endif // AWEAPON
