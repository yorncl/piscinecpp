#include "Boloss.hpp"

Boloss::Boloss() : Victim()
{
    std::cout << "Don't hurt me !" << std::endl;
}

Boloss::Boloss(std::string name) : Victim(name)
{
    std::cout << "Don't hurt me !" << std::endl;
}

Boloss::Boloss(const Boloss &b) : Victim(b)
{
    std::cout << "Don't hurt me !" << std::endl;
}

Boloss &Boloss::operator=(const Boloss &b) {
    Victim::operator=(b);
    return *this;
}

Boloss::~Boloss() {
    std::cout << "OOF" << std::endl;
}

void Boloss::getPolymorphed() const
{
    std::cout << _name << " has been turned into an even bigger boloss !" << std::endl;
}

