#pragma once
#include <iostream>
#include <string.h>
#include <string>

template <typename T, typename F>

void iter(T * array, int size, F *func)
{
    std::cout << "Endereco: " << &array << std::endl;
    std::cout << "Tamanho da string: " << size << std::endl;
    for (int i = 0; i < size; i++)
    {
        func (array[i]);
    }
}

void printChar(char c) {
    std::cout << c << "\n";
}


/////////////////// TESTER MICHEL /////////////////////


class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}
template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}