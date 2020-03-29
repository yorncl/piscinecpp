#if !defined(MACRO)
#define MACRO

#include <iostream>

class Fixed
{
private:
	int value;
	static const int nBits = 8;
public:
	Fixed();
	Fixed(Fixed &&) = default;
	Fixed(const Fixed &);
	Fixed &operator=(Fixed &&) = default;
	Fixed &operator=(const Fixed &) = default;
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif // MACRO

