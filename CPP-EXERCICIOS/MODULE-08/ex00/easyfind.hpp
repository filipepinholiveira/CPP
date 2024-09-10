#pragma once
#include <iostream>
#include <string.h>
#include <list>

class NotValidInput : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return "Valor nao existe no Array";
        }
};

template <typename T>
typename T::const_iterator easyfind(T value1, int value2)
{
    std::list<int>::const_iterator              it;
    std::list<int>::const_iterator              ite = value1.end();

    
    for (it = value1.begin(); it != ite; it++)
    {
        if (*it == value2)
        {
            std::cout << "Encontrado o valor no Array: " << *it << std::endl;
            return it;
        }
    }
    throw NotValidInput();
}