#if !defined(SQUAD)
#define SQUAD

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct s_list
{
	ISpaceMarine *marine;
	struct s_list *next;
}				t_list;

void delete_list(t_list *l);
t_list *copy_list(t_list *l);

class Squad : public ISquad
{
private:
	t_list *l;
public:
	Squad();
	Squad(const Squad &);
	Squad &operator=(const Squad &);
	~Squad();
	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine *);
};
#endif // SQUAD
