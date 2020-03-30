#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string);
	FragTrap(const FragTrap &) = default;
	FragTrap &operator=(const FragTrap &) = default;
	~FragTrap();
	void vaulthunter_dot_exe(std::string const & target);
};
#endif // FRAGTRAP_HPP