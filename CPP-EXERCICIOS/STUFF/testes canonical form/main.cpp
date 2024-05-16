
#include "sample.hpp"
#include <iostream>


int main()
{

    sample exemplo1;
    sample exemplo2(42);
    sample exemplo3(exemplo1);

    std::cout << "Após construtores verifico dados: " << std::endl;
    std::cout << "Exemplo 1: " << exemplo1 << std::endl;
    std::cout << "Exemplo 2: " <<  exemplo2 << std::endl;
    std::cout << "Exemplo 3 com copy constructor (Exemplo 1): " << exemplo3 << std::endl;

    exemplo3 = exemplo2;

    std::cout << "Exemplo 3 após dizer que é igual a Exemplo 2: " << exemplo3 << std::endl;

    std::cout << "Chamada de destrutores: " << std::endl;

    return 0;
}