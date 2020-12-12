#if !defined(SPAN_HPP)
#define SPAN_HPP

#include <algorithm>
#include <set>

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
    unsigned int shortestSpan();
    unsigned int longestSpan();
private:
    size_t _max_n;
    std::set<int> _s;
};

#endif // SPAN_HPP
