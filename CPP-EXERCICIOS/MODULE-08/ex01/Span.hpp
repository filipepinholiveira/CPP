#pragma once
#include <iostream>
#include <vector>
#include <algorithm>


class Span
{
    private:

    std::vector<int> _myvector;

    public:
        Span(unsigned int nbr);
        ~Span();

        Span (Span const &copy);

        Span &operator=(Span const &source);

        void    PrintElements() const;

    int &operator[](unsigned int index);
};


// std::ostream& operator<<(std::ostream& o, Span& value);