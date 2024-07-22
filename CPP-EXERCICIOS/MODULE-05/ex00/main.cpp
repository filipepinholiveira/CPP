#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    Bureaucrat One();
    Bureaucrat Two("Filipe", 150);
    // Two.incrementGrade();
    Two.decrementGrade();
    std::cout << "Nome: " << Two.getName() << std::endl;
    std::cout << "Nota: " << Two.getGrade() << std::endl;


    return 0;
}