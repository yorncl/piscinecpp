#include "Squad.hpp"

Squad::Squad()
{
	_list = 0;
}

Squad::Squad(const Squad &s)
{
	t_list *ptr = s._list;

	if (ptr)
		_list = copy_list(s._list);
	else
		_list = 0;
	
}

Squad &Squad::operator=(const Squad &s)
{
	delete_list(_list);
	_list = copy_list(s._list);
	return *this;
}

Squad::~Squad()
{
	delete_list(_list);
}

int Squad::getCount() const
{
	t_list *ptr = _list;
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
	t_list *ptr = _list;

	while (i-- && ptr)
		ptr = ptr->next;
	return ptr->marine;
}
int Squad::push(ISpaceMarine *sm)
{
	if (!_list)
	{
		_list = new t_list();
		_list->marine = sm;
		return 1;
	}
	t_list *ptr = _list;
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
