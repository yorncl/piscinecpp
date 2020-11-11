#include "Human.hpp"

Human::Human() : _brain(Brain(-150)) 
{
}

std::string	Human::identify()
{
	return _brain.identify();
}

Brain&		Human::getBrain()
{
	return (Brain&) _brain;
}

Human::~Human()
{    
}
