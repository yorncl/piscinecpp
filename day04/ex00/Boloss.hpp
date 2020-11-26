#if !defined(BOLOSS_HPP)
#define BOLOSS_HPP

#include "Victim.hpp"

class Boloss : public Victim
{
public:
    Boloss();
    Boloss(std::string name);
    Boloss(const Boloss &);
    Boloss &operator=(const Boloss &);
    ~Boloss();
	void getPolymorphed() const;

private:
    
};

#endif // BOLOSS_HPP
