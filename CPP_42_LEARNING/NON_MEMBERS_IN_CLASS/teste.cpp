
#include "sample.class.hpp"


void    f0(void)
{
    Sample instance;
    std::cout << "Numero de instancias " << Sample::getInstNbr() << std::endl;
    return;
}

void    f1(void)
{
    Sample instance;
    std::cout << "Numero de instancias " << Sample::getInstNbr() << std::endl;
    f0();
    return;
}


int main()
{
    std::cout << "Numero de instancias " << Sample::getInstNbr() << std::endl;
    f1();
    std::cout << "Numero de instancias " << Sample::getInstNbr() << std::endl;
    return 0;
}

// int main()
// {
//     Sample instancia;
    
//     return 0;
// }