#pragma once
#include <string>
#include <iostream>
/*
template <typename T>
class Box 
{
    private:
        T value;
    public:
        Box(T v) : value(v) {}
        T getValue() { return value; }
};
*/
template <typename T>
class Array
{
private:
    T _array;

public:
    Array()
    {
        new Array[];
    };
    Array(T v) : _array(v)
    {
        for (int i = 0; i < v; i++)
        {
            new Array[i];
        }
    }
};





