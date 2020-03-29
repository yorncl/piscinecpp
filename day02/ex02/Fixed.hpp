#if !defined(MACRO)
#define MACRO

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int nBits = 8;

public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(Fixed &&) = default;
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
	static Fixed& min(Fixed &, Fixed &);
	static const Fixed& min(const Fixed &, const Fixed &);
	static Fixed& max(Fixed &, Fixed &);
	static const Fixed& max(const Fixed &, const Fixed &);
};

std::ostream &operator<<(std::ostream &, const Fixed &f);
#endif // MACRO
