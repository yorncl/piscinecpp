#if !defined(ITER_HPP)
#define ITER_HPP

#include <cstdlib>

template<typename T>
void iter(T* arr, size_t size, void (*func)(T& elem))
{
    for (size_t i = 0; i < size; i++)
    {
        func(arr[i]);
    }
}

#endif // WHATEVER_HPP
