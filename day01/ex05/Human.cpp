#include "Human.hpp"

Human::Human(/* args */)
{
}

std::string	Human::identify()
{
	return this->brain.identify();
}

Brain&		Human::getBrain()
{
	return (Brain&) this->brain;
}