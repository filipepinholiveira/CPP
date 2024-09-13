#pragma once
#include <iostream>
#include <stack>


template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> 
{
    private:

    public:

        MutantStack(){};
        ~MutantStack(){};

        typedef typename C::iterator iterator;
        typedef typename C::const_iterator const_iterator;
        typedef typename C::reverse_iterator reverse_iterator;
        typedef typename C::const_reverse_iterator const_reverse_iterator;

        iterator    begin()
            {return this->c.begin();}
        iterator    end() 
            {return this->c.end();}
        reverse_iterator    rbegin() 
            {return this->c.rbegin();};
        reverse_iterator    rend()
            {return this->c.rend();}

     

};
