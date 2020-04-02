#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	std::cout << "========== Subject Tests ==========" << std::endl;
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

	std::cout << "========== My Tests ==========" << std::endl;
	Squad list1 = Squad();
	TacticalMarine *bob2 = new TacticalMarine;
	ISpaceMarine *jim2 = new AssaultTerminator;

	list1.push(bob2);
	list1.push(jim2);
	Squad list2 = Squad();
	list2 = list1;
	std::cout << "Assignment copy test: " << &list1 << " VS " << &list2 << std::endl;
	std::cout << "===> First list" << std::endl;
	for (int i = 0; i < list1.getCount(); ++i)
	{
		ISpaceMarine *cur = list1.getUnit(i);
		std::cout << "addr:" << cur << std::endl;
		cur->battleCry();
	}
	std::cout << "===> Second list 1" << std::endl;
	for (int i = 0; i < list2.getCount(); ++i)
	{
		ISpaceMarine *cur = list2.getUnit(i);
		std::cout << "addr:" << cur << std::endl;
		cur->battleCry();
	}
	std::cout << "===> Second list 2" << std::endl;
	for (int i = 0; i < list2.getCount(); ++i)
	{
		ISpaceMarine *cur = list2.getUnit(i);
		std::cout << "addr:" << cur << std::endl;
		cur->battleCry();
	}
	return 0;
}