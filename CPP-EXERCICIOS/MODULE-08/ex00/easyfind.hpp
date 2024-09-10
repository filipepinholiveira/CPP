#pragma once
#include <iostream>
#include <string.h>
#include <list>


template <typename T>

std::list<int>::const_iterator easyfind(T value1, int value2)
{
    std::list<int>::const_iterator              it;
    std::list<int>::const_iterator              ite = value1.end();

    
    for (it = value1.begin(); it != ite; it++)
    {
        if (*it == value2)
            return it;
    }
    throw 
}