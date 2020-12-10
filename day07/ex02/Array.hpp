#if !defined(ARRAY_HPP)
#define ARRAY_HPP

#include <stdexcept>

template<typename T>
class Array
{
private:
    T* _arr;
    size_t _size;

public:
    Array();
    Array(unsigned int size);
    Array(const Array &a);
    Array &operator=(const Array &a);
    T &operator[](unsigned int i);
    size_t size();
    virtual ~Array();    
};

template<typename T>
Array<T>::Array()
{
    _size = 0;
    _arr = NULL;
}

template<typename T>
Array<T>::Array(unsigned int size)
{
    _size = size;
    _arr = new T[_size];
    for (size_t i = 0; i < _size; i++)
        _arr[i] = 0;
}

template<typename T>
Array<T>::Array(const Array<T> &a)
{
    _size = a._size;
    _arr = new T[_size];
    for (size_t i = 0; i < _size; i++)
        _arr[i] = a._arr[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &a)
{
    if (_arr)
        delete[] _arr;
    _size = a._size;
    _arr = new T[_size];
    for (size_t i = 0; i < _size; i++)
        _arr[i] = a._arr[i];
    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw std::out_of_range("index out of range");
    return _arr[i];
}

template<typename T>
size_t Array<T>::size()
{
    return _size;
}

template<typename T>
Array<T>::~Array()
{
    delete[] _arr;
}


#endif // ARRAY_HPP
