#include "Span.hpp"

Span::Span(unsigned int nbr) : _myvector(nbr)
{
    std::fill(_myvector.begin(), _myvector.end(), 0);
}

Span::~Span()
{
    _myvector.clear();
}

Span::Span (Span const &copy)
{
    *this = copy;
}
Span &Span::operator=(Span const &source)
{
    if (this != &source)
    {
         //copy definition
    }
    return *this;
}

int &Span::operator[](unsigned int index)
{
    if(index >= _myvector.size())
        throw std::out_of_range("Índice fora do intervalo.");
    return _myvector[index];
}

void    Span::PrintElements() const
{
    std::vector<int>::const_iterator it;
    for (it = _myvector.begin(); it != _myvector.end(); ++it) 
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// std::ostream& operator<<(std::ostream& o, Span& value)
// {
//     (void) value;
//     return o;
// }