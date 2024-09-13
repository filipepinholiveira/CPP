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




        // MutantStack (MutantStack const &copy);

        // MutantStack &operator=(MutantStack const &source);

};

// std::ostream& operator<<(std::ostream& o, MutantStack& value);