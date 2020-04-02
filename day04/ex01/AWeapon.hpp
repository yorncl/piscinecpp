#if !defined(AWEAPON)
#define AWEAPON

#include <string>

class AWeapon
{
private:
	std::string const name;
	int const apcost;
	int const damage;
public:
	AWeapon(std::string const &name, int apcost, int damage);
	virtual ~AWeapon();
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};
#endif // AWEAPON
