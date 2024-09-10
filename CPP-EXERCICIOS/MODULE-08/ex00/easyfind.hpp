#pragma once
#include <iostream>
#include <string.h>
#include <list>
#include <algorithm>

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
    std::list<int>::const_iterator              it = value1.begin();
    std::list<int>::const_iterator              ite = value1.end();

    std::cout << "ITE: " << *ite << std::endl;
    if (std::find(it, ite, value2) == ite)
        throw NotValidInput();
    std::cout << "Encontrado o valor no Array!" << std::endl;
    return it;
}