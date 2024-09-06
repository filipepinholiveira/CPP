#pragma once
#include <string>
#include <string.h>
#include <iostream>


template <typename T>
class Array
{
    private:

        T* _array;
        unsigned int _size;


    public:
        Array();

        Array(unsigned int size);

        ~Array();

        Array (Array const &copy);

        Array &operator=(Array const &source);

        unsigned int getSize() const;

        // Acesso ao elemento (indexação)
        T& operator[](size_t indice);

};

#include "Array.tpp"













