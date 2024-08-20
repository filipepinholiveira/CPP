
#include <iostream>
#include "Bureaucrat.hpp"


int main()
{
    


    Bureaucrat teste("Filipe", 11);
    Form teste2;
    std::cout << teste << std::endl;
    std::cout << "Signing value at beggining?: " << teste2.getIsSigned() << std::endl;
    std::cout << "Is Signed after signform?: ";
    teste.signForm(teste2);
    std::cout << "Signing value at the end?: " << teste2.getIsSigned() << std::endl;


    return 0;
}