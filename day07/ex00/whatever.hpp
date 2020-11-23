#if !defined(WHATEVER_HPP)
#define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b)
{
    T *p1 = &a;
    T *p2 = &b;
    T tmp = a;
    
    *p1 = *p2;
    *p2 = tmp;
}

template <typename T>
T min(T &a, T &b)
{
    return a < b ? a : b;
}

template <typename T>
T max(T &a, T &b)
{
    return a > b ? a : b;
}

#endif // WHATEVER_HPP
