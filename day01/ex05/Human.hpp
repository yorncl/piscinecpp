#if !defined(HUMAN_HPP)
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const Brain brain = Brain();
public:
	Human();
	std::string	identify();
	Brain&	getBrain();
};
#endif // HUMAN_HPP