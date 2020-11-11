#if !defined(HUMAN_HPP)
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const Brain _brain;
public:
	Human();
	std::string	identify();
	Brain&	getBrain();
	~Human();
};
#endif // HUMAN_HPP
