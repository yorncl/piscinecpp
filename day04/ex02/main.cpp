#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	std::cout << "========== Construcors and assigment tests ==========" << std::endl;
	{
		std::cout << "ASSAULTTERMINATOR" << std::endl;
		AssaultTerminator a = AssaultTerminator();
		AssaultTerminator b(a);
		AssaultTerminator c = AssaultTerminator();
		c = a;
		a.battleCry();
		b.battleCry();
		c.battleCry();
	}
	std::cout << std::endl;
	{
		std::cout << "TACTICALMARINE" << std::endl;
		TacticalMarine a = TacticalMarine();
		TacticalMarine b(a);
		TacticalMarine c = TacticalMarine();
		c = a;
		a.battleCry();
		b.battleCry();
		c.battleCry();
	}
	std::cout << std::endl;
	{
		std::cout << "SQUAD" << std::endl;
		Squad s = Squad();
		s.push(new TacticalMarine());
		s.push(new AssaultTerminator());
		s.push(new TacticalMarine());
		Squad s2(s);
		s.push(new TacticalMarine());
		s.push(NULL);
		Squad s3 = Squad();
		s3 = s;
		std::cout << "===== Squad 1" << std::endl;
		for (int i = 0; i < s.getCount(); ++i)
		{
			ISpaceMarine *cur = s.getUnit(i);
			cur->battleCry();
		}
		std::cout << "===== Squad 2" << std::endl;
		for (int i = 0; i < s2.getCount(); ++i)
		{
			ISpaceMarine *cur = s2.getUnit(i);
			cur->battleCry();
		}
		std::cout << "===== Squad 3" << std::endl;
		for (int i = 0; i < s3.getCount(); ++i)
		{
			ISpaceMarine *cur = s3.getUnit(i);
			cur->battleCry();
		}
	}
	std::cout << std::endl;


	std::cout << "========== Subject Tests ==========" << std::endl;
	
	{
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;
		ISquad *vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine *cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << "========== My Tests ==========" << std::endl;
	{
		std::cout << "======== SQUAD" << std::endl;
		std::cout << "===== getCount/push" << std::endl;
		{
			std::cout << "== Empty" << std::endl;
			int r1, r2;
			Squad s = Squad();
			r1 = s.getCount();
			s.push(NULL);
			s.push(NULL);
			s.push(NULL);
			s.push(NULL);
			r2 = s.getCount();
			if (r1 == 0 && r2 == 0)
				std::cout << "OK" << std::endl;
			else
				std::cout << "ERROR" << std::endl;
		}
		{
			std::cout << "== Size of 3" << std::endl;
			AssaultTerminator *a = new AssaultTerminator();
			Squad s = Squad();

			s.push(new AssaultTerminator());
			s.push(new TacticalMarine());
			s.push(a);
			s.push(a);
			s.push(a);
			s.push(a);
			s.push(0);
			s.push(0);
			s.push(0);
			if (s.getCount() == 3)
				std::cout << "OK" << std::endl;
			else
				std::cout << "ERROR" << std::endl;
		}
		std::cout << "===== getUnit" << std::endl;
		{
			std::cout << "== Empty" << std::endl;
			Squad s = Squad();
			s.push(NULL);
			s.push(NULL);
			s.push(NULL);
			s.push(NULL);
			if (s.getUnit(0) == NULL)
				std::cout << "OK" << std::endl;
			else
				std::cout << "ERROR" << std::endl;
		}
		{
			std::cout << "== Size of 3" << std::endl;
			AssaultTerminator *a = new AssaultTerminator();
			Squad s = Squad();

			s.push(new AssaultTerminator());
			s.push(new TacticalMarine());
			s.push(a);
			s.push(a);
			s.push(a);
			s.push(a);
			s.push(0);
			s.push(0);
			s.push(0);

			std::cout << "= Out of bound" << std::endl;
			std::cout << (s.getUnit(-15) == NULL ? "OK" : "ERROR") << std::endl;
			std::cout << (s.getUnit(-1) == NULL ? "OK" : "ERROR") << std::endl;
			std::cout << (s.getUnit(15) == NULL ? "OK" : "ERROR") << std::endl;
			std::cout << (s.getUnit(3) == NULL ? "OK" : "ERROR") << std::endl;
			std::cout << "= 0" << std::endl;
			ISpaceMarine *sp = s.getUnit(0);
			sp->battleCry();
			std::cout << "= 1" << std::endl;
			sp = s.getUnit(1);
			sp->battleCry();
			std::cout << "= 2" << std::endl;
			sp = s.getUnit(2);
			sp->battleCry();
		}
		std::cout << "======== MARINES" << std::endl;
		{
			std::cout << "===== clone and attacks" << std::endl;
			{
				std::cout << "==  AssaultTerminator" << std::endl;
				ISpaceMarine *a = new AssaultTerminator();
				ISpaceMarine *b  = a->clone();
				a->battleCry();
				b->battleCry();
				a->meleeAttack();
				b->meleeAttack();
				a->rangedAttack();
				b->rangedAttack();
				std::cout << (a != b ? "OK" : "ERROR") << std::endl;
				delete a;
				delete b;
			}
			{
				std::cout << "==  TacticalMarine" << std::endl;
				ISpaceMarine *a = new TacticalMarine();
				ISpaceMarine *b  = a->clone();
				a->battleCry();
				b->battleCry();
				a->meleeAttack();
				b->meleeAttack();
				a->rangedAttack();
				b->rangedAttack();
				std::cout << (a != b ? "OK" : "ERROR") << std::endl;
				delete a;
				delete b;
			}
		}
	}
	return 0;
}