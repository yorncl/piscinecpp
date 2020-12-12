#if !defined(SPAN_HPP)
#define SPAN_HPP

#include <algorithm>
#include <set>
#include "limits.h"

class Span
{
public:
    class SpanFullException : public std::exception
    {
        const char* what() const throw();
    };
    class NotEnoughElements : public std::exception
    {
        const char* what() const throw();
    };
    Span();
    Span(unsigned int);
    Span(const Span &);
    Span &operator=(const Span &);
    virtual ~Span();
    void addNumber(int);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
private:
    unsigned int _n;
    std::set<int> _s;
};

#endif // SPAN_HPP
