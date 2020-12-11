#include "ComplexType.hpp"

ComplexType::ComplexType()
{
    _n = 0;
}

ComplexType::ComplexType(int n)
{
    _n = n;
}

ComplexType &ComplexType::operator=(const ComplexType &c)
{
    _n = c._n;
    return *this;
}

ComplexType::~ComplexType()
{
}

bool  ComplexType::operator==(ComplexType const & c)
{
    return (this->_n == c._n);
}

bool  ComplexType::operator!=(ComplexType const & c)
{
    return (this->_n != c._n);
}

bool  ComplexType::operator>(ComplexType const & c)
{
    return (this->_n > c._n);
}

bool  ComplexType::operator<(ComplexType const & c)
{
    return (this->_n < c._n);
}

bool  ComplexType::operator>=(ComplexType const & c)
{
    return (this->_n >= c._n);
}

bool  ComplexType::operator<=(ComplexType const & c)
{
    return (this->_n <= c._n);
}
