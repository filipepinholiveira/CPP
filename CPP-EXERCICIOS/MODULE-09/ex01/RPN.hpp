#pragma once
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <algorithm>
#include <exception>

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

        class NotValidInput : public std::exception
        {
                public:
                virtual const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream& o, RPN& value);