#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	size_t l;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (--ac)
	{
		av++;
		l = std::strlen(*av);
		for (size_t i = 0; i < l; i++)
			(*av)[i] = ::toupper((*av)[i]); 
		std::cout << *av;
	}
	std::cout << std::endl;
	return 0;
}
