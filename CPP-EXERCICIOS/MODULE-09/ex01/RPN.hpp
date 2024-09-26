#pragma once
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <algorithm>

class RPN
{
    private:
        std::stack<int> _stack;


    public:
        RPN();
        ~RPN();

        RPN (RPN const &copy);

        RPN &operator=(RPN const &source);

        void    executeOperation(std::string info);

};

std::ostream& operator<<(std::ostream& o, RPN& value);