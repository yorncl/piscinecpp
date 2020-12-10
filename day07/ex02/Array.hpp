#if !defined(ARRAY_HPP)
#define ARRAY_HPP

#include <stdexcept>

template<typename T>
class Array
{
public:
    Array()
    {
        _size = 0;
        _arr = NULL;
    }
    Array(unsigned int size)
    {
        _size = size;
        _arr = new T[_size];
        for (size_t i = 0; i < _size; i++)
            _arr[i] = 0;
    }
    Array(const Array &a)
    {
        _size = a._size;
        _arr = new T[_size];
        for (size_t i = 0; i < _size; i++)
            _arr[i] = a._arr[i];
    }
    Array &operator=(const Array &a)
    {
        if (_arr)
            delete[] _arr;
        _size = a._size;
        _arr = new T[_size];
        for (size_t i = 0; i < _size; i++)
            _arr[i] = a._arr[i];
        return *this;
    }
    T &operator[](unsigned int i)
    {
        if (i >= _size)
            throw std::out_of_range("index out of range");
        return _arr[i];
    }
    size_t size()
    {
        return _size;
    }

    ~Array()
    {
        delete[] _arr;
    }

private:
    T* _arr;
    size_t _size;
    
};
#endif // ARRAY_HPP
