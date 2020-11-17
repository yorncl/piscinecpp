#if !defined(FIXED_HPP)
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _value;
	static const int _fractional_bits;

public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed &);
	int operator>(const Fixed &) const;
	int operator<(const Fixed &) const;
	int operator>=(const Fixed &) const;
	int operator<=(const Fixed &) const;
	int operator==(const Fixed &) const;
	int operator!=(const Fixed &) const;
	Fixed& operator=(const Fixed &);
	Fixed operator-(const Fixed &);
	Fixed operator+(const Fixed &);
	Fixed operator/(const Fixed &);
	Fixed operator*(const Fixed &);
	Fixed &operator--();
	Fixed operator--(int);
	Fixed &operator++();
	Fixed operator++(int);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

Fixed& min(Fixed &, Fixed &);
Fixed& max(Fixed &, Fixed &);

std::ostream &operator<<(std::ostream &, const Fixed &f);
#endif // FIXED_HPP
