#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

int main()
{

	std::cout << "====== Construtors and assignment tests ======" << std::endl;
	{
		std::cout << "ENEMY" << std::endl;
		Enemy a(150,"Test");
		Enemy b(a);
		Enemy c(120, "okidoki");
		c = a;
		std::cout << "a type: " << a.getType() << "  hp: " << a.getHP() << std::endl;
		std::cout << "b type: " << b.getType() << "  hp: " << b.getHP() << std::endl;
		std::cout << "c type: " << c.getType() << "  hp: " << c.getHP() << std::endl;
		Enemy *ep = new Enemy[3];
		delete[] ep;
	}
	std::cout << std::endl;
	{
		std::cout << "CHARACTER" << std::endl;
		Character a("Test");
		Character b(a);
		Character c("okidoki");
		c = a;
		std::cout << "a name: " << a.getName() << "  hp: " << a.getAp() << std::endl;
		std::cout << "b name: " << b.getName() << "  hp: " << b.getAp() << std::endl;
		std::cout << "c name: " << c.getName() << "  hp: " << c.getAp() << std::endl;
		Character *ep = new Character[3];
		delete[] ep;
	}
	std::cout << std::endl;
	{
		std::cout << "RADSCORPION" << std::endl;
		RadScorpion a = RadScorpion();
		a.takeDamage(10);
		RadScorpion b(a);
		RadScorpion c = RadScorpion();
		c = a;
		std::cout << "a type: " << a.getType() << "  hp: " << a.getHP() << std::endl;
		std::cout << "b type: " << b.getType() << "  hp: " << b.getHP() << std::endl;
		std::cout << "c type: " << c.getType() << "  hp: " << c.getHP() << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "SUPERMUTANT" << std::endl;
		SuperMutant a = SuperMutant();
		a.takeDamage(10);
		SuperMutant b(a);
		SuperMutant c = SuperMutant();
		c = a;
		std::cout << "a type: " << a.getType() << "  hp: " << a.getHP() << std::endl;
		std::cout << "b type: " << b.getType() << "  hp: " << b.getHP() << std::endl;
		std::cout << "c type: " << c.getType() << "  hp: " << c.getHP() << std::endl;
	}

	std::cout << std::endl;
	{
		std::cout << "PLASMARIFLE" << std::endl;
		PlasmaRifle a = PlasmaRifle();
		PlasmaRifle b(a);
		PlasmaRifle c = PlasmaRifle();
		c = a;
		std::cout << "a: " << a.getName() << " " << a.getAPCost() << " " << a.getDamage() << std::endl;
		std::cout << "b: " << b.getName() << " " << b.getAPCost() << " " << b.getDamage() << std::endl;
		std::cout << "a: " << c.getName() << " " << c.getAPCost() << " " << c.getDamage() << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "POWERFIST" << std::endl;
		PowerFist a = PowerFist();
		PowerFist b(a);
		PowerFist c = PowerFist();
		c = a;
		std::cout << "a: " << a.getName() << " " << a.getAPCost() << " " << a.getDamage() << std::endl;
		std::cout << "b: " << b.getName() << " " << b.getAPCost() << " " << b.getDamage() << std::endl;
		std::cout << "a: " << c.getName() << " " << c.getAPCost() << " " << c.getDamage() << std::endl;
	}

	std::cout << std::endl << "====== Subject Tests ======" << std::endl;
	{
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
		delete me;
		delete pr;
		delete pf;
	}
	
	std::cout << std::endl << "====== My Tests ======" << std::endl;
	{
		Character *me = new Character("me");
		std::cout << *me;
		Enemy *b = new RadScorpion();
		AWeapon *pr = new PlasmaRifle();
		AWeapon *pf = new PowerFist();
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
		me->equip(pr);
		me->attack(s);
		me->recoverAP();
		me->attack(s);
		me->recoverAP();
		std::cout << *me;
		delete me;
		delete b;
		delete pr;
		delete pf;
	}

	return 0;
}