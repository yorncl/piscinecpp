#include "Span.hpp"

Span::Span()
{
    _max_n = 0;
}

Span::Span(unsigned int n)
{
    _max_n = 0;
}

Span::Span(const Span &)
{
}

Span &Span::operator=(const Span &s)
{
    _max_n = s._max_n;
    _v = s._v;
    return *this;   
}

Span::~Span()
{   
}

void    Span::addNumber()
{

}
int     Span::shortestSpan()
{
    std::min_element()
}
int     Span::longestSpan()
{

}

const char * Span::Full::what() throw()
{
    return "N reached";
}