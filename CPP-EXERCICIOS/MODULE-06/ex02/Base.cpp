#include "Base.hpp"


Base::Base()
{
    std::cout << "Default constructor called" << std::endl;
}


Base::~Base()
{
    std::cout << "Default destructor called" << std::endl;
}

Base * generate(void)
{
    //std::srand(std::time(nullptr));

    std::srand(static_cast<unsigned>(std::time(NULL)));

    int randomValue = rand() % 3; // Gera um valor aleatório entre 0 e 2

    switch (randomValue) 
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL; // Para evitar warnings, embora isso nunca ocorra
    }
}