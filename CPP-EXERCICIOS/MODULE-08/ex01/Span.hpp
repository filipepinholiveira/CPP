#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <ctime>    // Para time()
#include <exception>


class Span
{
    private:

    std::vector<int> _myvector;
    size_t _currentIndex;

    public:
        Span(unsigned int nbr);
        ~Span();

        Span (Span const &copy);

        Span &operator=(Span const &source);

        void    PrintElements() const;

    int &operator[](unsigned int index);

    void    addNumber (int nbr);

    int shortestSpan();

    int longestSpan();

    class NotValidInput : public std::exception
{
    public:
        virtual const char* what() const throw();
        
};
};


// std::ostream& operator<<(std::ostream& o, Span& value);