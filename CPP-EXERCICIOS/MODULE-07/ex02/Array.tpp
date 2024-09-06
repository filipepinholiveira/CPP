#include "Array.hpp"


template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
    // default construtor
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
    if (size == 0)
        _array = NULL;
    else
        _array = new T[_size];
}

template<typename T>
Array<T>::~Array()
{
    delete [] _array;
}

template<typename T>
Array<T>::Array (Array const &copy) : _size(copy._size)
{
   *this = copy;
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &source)
{
    if (this != &source)
    {
        delete [] _array;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = source._array[i];
    }
    return *this;
}

template<typename T>
unsigned int Array<T>::getSize() const
{
    return _size;
}

template<typename T>
T& Array<T>::operator[](size_t indice)
{
    if (indice >= _size)
        throw (std::out_of_range("Fora do index"));
    return _array[indice];
}



