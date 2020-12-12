#include "Span.hpp"

Span::Span()
{
    _n = 0;
}

Span::Span(unsigned int n)
{
    _n = n;
}

Span::Span(const Span &s)
{
    _n = s._n;
    _s = s._s;
}

Span &Span::operator=(const Span &s)
{
    _n = s._n;
    _s = s._s;
    return *this;
}

Span::~Span()
{   
}

void    Span::addNumber(int n)
{
    if (_s.size() < _n)
        _s.insert(n);
    else
        throw SpanFullException();
}

void    Span::addNumber(int low, int high)
{
    for (int i = low; i < high; i++)
    {
        if (_s.size() < _n)
            _s.insert(i);
        else
            throw SpanFullException();
    }
}

unsigned int     Span::shortestSpan() const
{
    if (_s.size() <= 1)
        throw NotEnoughElements();
    
    std::set<int>::iterator curr = _s.begin();
    std::set<int>::iterator next = ++_s.begin();
    unsigned int min = UINT_MAX;
    for (size_t i = 0; i < _s.size() - 1; i++)
    {
        unsigned int tmp = *next - *curr;
        if (tmp < min)
            min = tmp;
        curr++;
        next++;
    }
    return min;

}

unsigned int     Span::longestSpan() const
{
    if (_s.size() <= 1)
        throw NotEnoughElements();
    std::set<int>::iterator min = std::min_element(_s.begin(), _s.end());
    std::set<int>::iterator max = std::max_element(_s.begin(), _s.end());

    return *max - *min;
}

const char * Span::SpanFullException::what() const throw()
{
    return "The Span is full";
}

const char * Span::NotEnoughElements::what() const throw()
{
    return "Not enough elements";
}
