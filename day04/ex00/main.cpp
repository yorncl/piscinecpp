#include "Peon.hpp"
#include "Victim.hpp"
#include "Boloss.hpp"
#include "Sorcerer.hpp"

int main(void)
{
	std::cout << "-------- Constructor + assignation tests ----------" << std::endl;
	{
		std::cout << "SORCERER" << std::endl;
		Sorcerer s("Bob","le bricoleur");
		Sorcerer s2(s);
		Sorcerer s3("Dora", "l'exploratriice");
		s3 = s;
		std::cout << s;
		std::cout << s2;
		std::cout << s3;
	}
	std::cout << std::endl;
	{
		std::cout << "VITCIM" << std::endl;
		Victim v("Bob");
		Victim v2(v);
		Victim v3("Dora");
		v3 = v;
		std::cout << v << v2 << v3;
		Victim *vp = new Victim[3];
		delete[] vp;
	}
	std::cout << std::endl;
	{
		std::cout << "PEON" << std::endl;
		Peon p("Bob");
		Peon p2(p);
		Peon p3("Dora");
		p3 = p2;
		std::cout << p << p2 << p3;
		Peon *vp = new Peon[3];
		delete[] vp;
	}
	std::cout << std::endl;
	{
		std::cout << "BOLOSS" << std::endl;
		Boloss p("Bob");
		Boloss p2(p);
		Boloss p3("Dora");
		p3 = p2;
		std::cout << p << p2 << p3;
		Boloss *vp = new Boloss[3];
		delete[] vp;
	}
	std::cout << std::endl << "========== Subject tests ==========" << std::endl;
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << std::endl << "========== My tests ==========" << std::endl;
	{
		Sorcerer robert("Fanfan", "la Tulipe");
		Boloss b("Bob");
		robert.polymorph(b);
	}
	return 0;
}