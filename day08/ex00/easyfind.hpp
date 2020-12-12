#if !defined(EASYFIND_HPP)
#define EASYFIND_HPP


#include <algorithm>

class NotFoundException : public std::exception
{
    const char* what() const throw()
    {
        return "Element has not been found";
    }
};

template <typename T>
int easyfind(T &t, int i)
{
    typename T::iterator r =  std::find(t.begin(), t.end(), i);
    if (r == t.end())
        throw NotFoundException();
    return *r;
}

#endif // EASYFIND_HPP
