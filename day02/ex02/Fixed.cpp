#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const Fixed &a)
{
	_value = a._value;
}

Fixed::Fixed(const int i)
{
	_value = i << Fixed::_fractional_bits;
}

Fixed::Fixed(const float f)
{
	_value = roundf(f * (1 << Fixed::_fractional_bits));
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float Fixed::toFloat(void) const
{
	return float(_value) / (1 << Fixed::_fractional_bits);
}

int Fixed::toInt(void) const
{
	return _value >> Fixed::_fractional_bits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

int Fixed::operator>(const Fixed &f) const
{
	return _value > f._value;
};

int Fixed::operator<(const Fixed &f) const
{
	return _value < f._value;
};

int Fixed::operator>=(const Fixed &f) const
{
	return _value >= f._value;
};

int Fixed::operator<=(const Fixed &f) const
{
	return _value <= f._value;
};

int Fixed::operator==(const Fixed &f) const
{
	return _value == f._value;
};

int Fixed::operator!=(const Fixed &f) const
{
	return _value != f._value;
};

Fixed &Fixed::operator=(const Fixed &f)
{
	_value = f._value;
	return *this;
}

Fixed Fixed::operator-(const Fixed &f)
{
	Fixed r;
	r._value = _value - f._value;
	return r;
};

Fixed Fixed::operator+(const Fixed &f)
{
	Fixed r;
	r._value = _value + f._value;
	return r;
};

Fixed Fixed::operator/(const Fixed &f)
{
	return Fixed(this->toFloat() / f.toFloat());
};

Fixed Fixed::operator*(const Fixed &f)
{
	return Fixed(this->toFloat() * f.toFloat());
};

Fixed& Fixed::operator--()
{
	_value-= (1 << Fixed::_fractional_bits);
	return *this;
};

Fixed Fixed::operator--(int)
{
	_value-= (1 << Fixed::_fractional_bits);
	return *this;
};

Fixed& Fixed::operator++()
{
	_value+= (1 << Fixed::_fractional_bits);
	return *this;
};

Fixed Fixed::operator++(int)
{
	_value+= (1 << Fixed::_fractional_bits);
	return *this;
};

Fixed& min(Fixed &a, Fixed &b)
{
	return a > b ? b : a;
}

Fixed& max(Fixed &a, Fixed &b)
{
	return a < b ? b : a;
}


int main(void)
{

	{
		Fixed a;
		Fixed b(10);	
		Fixed c(42.42f);
		Fixed d(b);
		a = Fixed(1234.4321f);

		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}

	Fixed a = 5;
	Fixed b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
	Fixed tmp(2);
	std::cout << (b / tmp) << std::endl;
	
	return 0;
}