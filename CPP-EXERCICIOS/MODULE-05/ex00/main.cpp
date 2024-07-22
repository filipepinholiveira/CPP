#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    Bureaucrat One();
    try
    {
        Bureaucrat Two("Filipe", 0);
    std::cout << "Nome: " << Two.getName() << std::endl;
    std::cout << "Nota: " << Two.getGrade() << std::endl;
    Two.decrementGrade();
    Two.incrementGrade();
    }
    catch(const char* &exception)
    {
        std::cout << "Erro!" << std::endl;
    }


    return 0;
}