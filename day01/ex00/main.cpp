#include "Pony.hpp"


void	ponyOnTheStack()
{
	Pony p = Pony("rouge", 7);
	p.talk();
	// delete &p;
}

void	ponyOnTheHeap()
{
	Pony *p = new Pony("bleu", 15);
	p->talk();
	delete p;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
}