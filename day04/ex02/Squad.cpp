#include "Squad.hpp"

Squad::Squad()
{
	_list = NULL;
}

Squad::Squad(const Squad &s)
{
	if (s._list)
		_list = copy_list(s._list);
	else
		_list = NULL;
}

Squad &Squad::operator=(const Squad &s)
{
	if (_list)
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

	if (i < 0)
		return(NULL);
	while (i-- && ptr)
		ptr = ptr->next;
	return ptr ? ptr->marine : NULL;
}
int Squad::push(ISpaceMarine *sm)
{
	if (!sm)
		return getCount();
	if (!_list)
	{
		_list = new t_list();
		_list->marine = sm;
		_list->next = NULL;
		return 1;
	}
	t_list *prev = NULL;
	t_list *curr = _list;
	while (curr)
	{
		if (curr->marine == sm)
			return getCount();
		prev = curr;
		curr = curr->next;
	}
	prev->next = new t_list();
	prev->next->marine = sm;
	prev->next->next = NULL;
	return getCount();
}


t_list *copy_list(t_list *l)
{
	if (!l)
		return NULL;
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
