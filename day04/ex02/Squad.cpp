#include "Squad.hpp"

Squad::Squad()
{
	l = 0;
}

Squad::~Squad()
{
	delete_list(l);
}

Squad::Squad(const Squad &s)
{
	t_list *ptr = l;

	while (ptr)
	{
		l = copy_list(s.l);
		ptr = ptr->next;
	}
}

int Squad::getCount() const
{
	t_list *ptr = l;
	int r = 0;

	while (ptr)
	{
		ptr = ptr->next;
		r++;
	}
	return r;
}

ISpaceMarine *Squad::getUnit(int i) const
{
	t_list *ptr = l;

	while (i-- && ptr)
		ptr = ptr->next;
	return ptr->marine;
}
#include <iostream>
int Squad::push(ISpaceMarine *sm)
{
	if (!l)
	{
		l = new t_list();
		l->marine = sm;
		return 1;
	}
	std::cout << "Here !" << l << std::endl;
	t_list *ptr = l;

	while (ptr->next)
	{
		if (ptr->marine == sm)
		{
			return getCount();
		}
		ptr = ptr->next;
	}
	ptr->next = new t_list();
	ptr->next->marine = sm;
	return getCount();
}

Squad &Squad::operator=(const Squad &s)
{
	delete_list(l);
	l = copy_list(s.l);
	std::cout << "ASSIGNATION ====" << std::endl;
	return *this;
}

t_list *copy_list(t_list *l)
{
	if (!l)
		return 0;
	t_list *newl = new t_list();
	t_list *ptr = newl;
	newl->marine = l->marine->clone();
	while (l->next)
	{
		l = l->next;
		ptr->next = new t_list();
		ptr->next->marine = l->marine->clone();
		ptr = ptr->next;
	}
	return newl;
}

void delete_list(t_list *l)
{
	t_list *ptr = l;
	t_list *next;

	while (ptr)
	{
		delete ptr->marine;
		next = ptr->next;
		delete ptr;
		ptr = next;
	}
}
