
#include <iostream>
#include "Bureaucrat.hpp"


int main()
{
    


    Bureaucrat teste("Filipe", 15);
    Form teste2;
    std::cout << teste << std::endl;
    std::cout << "Is Signed?: " << teste2.getIsSigned() << std::endl;
    std::cout << "Is Signed?: " << teste.signForm(teste2) << std::endl;

    return 0;
}