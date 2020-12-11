#if !defined(COMPLEXTYPE_HPP)
#define COMPLEXTYPE_HPP

class ComplexType
{
public:
    ComplexType();
    ComplexType(int n);
    ComplexType(const ComplexType &);
    ComplexType &operator=(const ComplexType &);
    ~ComplexType();
    bool operator==( ComplexType const &c);
    bool operator!=( ComplexType const &c);
    bool operator>( ComplexType const &c);
    bool operator<( ComplexType const &c);
    bool operator>=( ComplexType const &c);
    bool operator<=( ComplexType const &c);

private:
    int _n;
};

#endif // COMPLEXTYPE_HPP
