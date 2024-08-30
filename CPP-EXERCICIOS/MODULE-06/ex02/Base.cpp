#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"



Base::~Base()
{
    std::cout << "Default destructor called" << std::endl;
}

Base * generate(void)
{
    //std::srand(std::time(nullptr));

    std::srand(static_cast<unsigned>(std::time(NULL)));

    int randomValue = rand() % 3; // Gera um valor aleatório entre 0 e 2
    Base *created = NULL;


    switch (randomValue) 
    {
        case 0:
            created = new A();
            break;
        case 1:
            created = new B();
            break;
        case 2:
            created = new C();
            break;
        default:
            return NULL; // Para evitar warnings, embora isso nunca ocorra
    }

    return created;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "Eu sou a classe A\n";
    } 
    else if (dynamic_cast<B*>(p)) 
    {
        std::cout << "Eu sou a classe B\n";
    } 
    else if (dynamic_cast<C*>(p)) 
    {
        std::cout << "Eu sou a classe C\n";
    } 
    else 
    {
        std::cout << "Tipo desconhecido\n";
    }
}