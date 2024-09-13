#include "Span.hpp"

Span::Span(unsigned int nbr) : _myvector(nbr), _currentIndex(0)
{
    //std::fill(_myvector.begin(), _myvector.end(), 0);
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

void    Span::addNumber (int nbr)
{
    if (_currentIndex < _myvector.size())
    {
        _myvector[_currentIndex] = nbr;
        _currentIndex++;
    }
    else
        throw NotValidInput();
    
}

int Span::shortestSpan()
{
    int shortValue = INT_MAX;

    for (size_t i = 0; i < _myvector.size(); i++) 
    {
        for (size_t j = i + 1; j < _myvector.size(); j++)
        {
        // std:: cout << "Value 1: " << _myvector[i] << std::endl;
        // std:: cout << "Value 2: " << _myvector[j] << std::endl;
        // std:: cout << "Diferenca: " << std::abs(_myvector[i] - _myvector[j]) << std::endl;
        // std::cout << "\n";

        if (shortValue > std::abs(_myvector[i] - _myvector[j]))
           shortValue = std::abs(_myvector[i] - _myvector[j]);
        }
    }
    return shortValue;
}

int Span::longestSpan()
{
    int longValue = INT_MIN;

    for (size_t i = 0; i < _myvector.size(); i++) 
    {
        for (size_t j = i + 1; j < _myvector.size(); j++)
        {
        // std:: cout << "Value 1: " << _myvector[i - 1] << std::endl;
        // std:: cout << "Value 2: " << _myvector[i] << std::endl;
        // std:: cout << "Diferenca: " << std::abs(_myvector[i - 1] - _myvector[i]) << std::endl;
        // std::cout << "\n";

        if (longValue < std::abs(_myvector[i] - _myvector[j]))
           longValue = std::abs(_myvector[i] - _myvector[j]);

        }

    }

    return longValue;
}


const char* Span::NotValidInput::what() const throw()
{
        return "Array is already full\n";
}

