#if !defined(SPAN_HPP)
#define SPAN_HPP

#include <algorithm>
#include <vector>

class Span
{
public:
    Span();
    Span(unsigned int);
    Span(const Span &);
    Span &operator=(const Span &);
    virtual ~Span();
    void addNumber();
    int shortestSpan();
    int longestSpan();
    class Full : public std::exception
    {
        const char * what() throw();
    };
private:
    unsigned int _max_n;
    std::vector<int> _v;
};

#endif // SPAN_HPP
