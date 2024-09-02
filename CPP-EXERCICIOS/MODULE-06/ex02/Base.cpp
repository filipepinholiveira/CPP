#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>  // Para rand()
#include <ctime>    // Para time()
#include <stdexcept> // Para std::bad_cast



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
            return new A();
        case 1:
            return new B();
        case 2:
          return new C();
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

void readRef(Base& p)
{
    identify(p);
}

/*
dynamic_cast e Tratamento de Exceções:

O dynamic_cast<A&>(p) é usado dentro de um bloco try. Se a conversão falhar, uma exceção std::bad_cast é lançada e capturada pelo bloco catch.
Dentro do catch, tentamos a próxima conversão (para B&, depois C&), e se todas falharem, imprimimos "Tipo desconhecido".
*/

// class A : public Base {};
// class B : public Base {};
// class C : public Base {};

void identify(Base& p) 
{
    try 
    {
        // Tentando converter para A
        A& a = dynamic_cast<A&>(p);
        std::cout << "Eu sou a classe A\n";
    } 
    catch (const std::bad_cast&) 
    {
        try 
        {
            // Tentando converter para B
            B& b = dynamic_cast<B&>(p);
            std::cout << "Eu sou a classe B\n";
        } 
        catch (const std::bad_cast&) 
        {
            try 
            {
                // Tentando converter para C
                C& c = dynamic_cast<C&>(p);
                std::cout << "Eu sou a classe C\n";
            } 
            catch (const std::bad_cast&) 
            {
                // Se todas as conversões falharem, é um tipo desconhecido
                std::cout << "Tipo desconhecido\n";
            }
        }
    }
}