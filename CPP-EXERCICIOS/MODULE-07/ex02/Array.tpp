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
    T* _array;
    unsigned int _size;

public:
    
    Array() : _array(NULL), _size(0)
    {
        // default construtor 
    }

    Array(unsigned int size) : _size(size)
    {
        if (size == 0)
            _array = NULL;
        else
            _array = new T[size];
    }
    
    ~Array()
    {
        delete[] _array;
    }
    
    unsigned int getSize() const
    {
        return _size;
    }
};

T& operator[](unsigned int index);