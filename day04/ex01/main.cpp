#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

int main()
{

	std::cout << "====== Construtor Tests ======" << std::endl;

	std::cout << std::endl << "====== Subject Tests ======" << std::endl;
	Character *me = new Character("me");
	std::cout << *me;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	
	std::cout << std::endl << "====== My Tests ======" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	SuperMutant *s = new SuperMutant();
	me->equip(0);
	me->attack(s);
	me->attack(s);
	std::cout << *me;
	me->equip(pf);
	me->attack(s);
	me->recoverAP();
	me->attack(s);
	me->recoverAP();
	me->attack(s);
	me->recoverAP();
	me->attack(s);
	me->recoverAP();
	std::cout << *me;

	return 0;
}