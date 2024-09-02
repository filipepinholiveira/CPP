#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>  // Para rand()
#include <ctime>    // Para time()
#include <stdexcept> // Para std::bad_cast

Base::~Base() {
    std::cout << "Default destructor called" << std::endl;
}

Base* generate(void) {
    std::srand(static_cast<unsigned>(std::time(NULL)));

    int randomValue = std::rand() % 3;
    switch (randomValue) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
        default: return NULL;
    }
}

void identify(Base* p) {
    if (p == NULL) {
        std::cout << "Ponteiro nulo\n";
        return;
    }
    if (dynamic_cast<A*>(p)) {
        std::cout << "Eu sou a classe A\n";
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "Eu sou a classe B\n";
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "Eu sou a classe C\n";
    } else {
        std::cout << "Tipo desconhecido\n";
    }
}

void readRef(Base& p) {
    identify(&p);  // Usa a função identify que aceita um ponteiro
}

const char * Base::BadCast::what() const throw()
{
    return "Bad Cast exception";
}

// void identify(Base& p) 
// {
//     try 
//     {
//         dynamic_cast<A&>(p);
//         {
//             std::cout << "Eu sou a classe A\n";
//             return;
//         }
//         dynamic_cast<B&>(p);
//         {
//             std::cout << "Eu sou a classe B\n";
//             return;
//         }
//         dynamic_cast<C&>(p);
//         {
//             std::cout << "Eu sou a classe C\n";
//             return;
//         }
//     } 
//     catch(const std::exception& e)
//     {
//         throw Base::BadCast();
//         //std::cerr << e.what() << '\n';
//     }
//     // catch (const std::bad_cast&)
//     // {
//     //     // Captura falha de conversão para A, B, C
//     // }
// }

void identify(Base& p) 
{
    try 
    {
        (void) dynamic_cast<A&>(p);
        std::cout << "Eu sou a classe A\n";
        return;
    } 
    catch(const std::exception& e)
    {
        // Captura falha de conversão para A, tenta B
    }

    try 
    {
        (void) dynamic_cast<B&>(p);
        std::cout << "Eu sou a classe B\n";
        return;
    } 
    catch(const std::exception& e)
    {
        // Captura falha de conversão para B, tenta C
    }

    try 
    {
        (void) dynamic_cast<C&>(p);
        std::cout << "Eu sou a classe C\n";
        return;
    } 
    catch(const std::exception& e)
    {
        // Captura falha de conversão para C
    }

    // Se todas as conversões falharem, lança a exceção personalizada
    throw Base::BadCast();
}
