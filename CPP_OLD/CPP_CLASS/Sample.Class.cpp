
#include "Sample.Class.hpp"
#include "iostream"

Sample::Sample( void )
{
    std::cout << "Contructor called" << std::endl;
    return;
}

void    Sample::bar(void)
{
    std::string PASS;
    std::cout << "Imput sample class object: " << std::endl;
    std::cin >> PASS;
    std::cout << "Your Class object is : " << PASS << "" << std::endl;
    return;
}

Sample::~Sample( void )
{
    std::cout << "Destructor called" << std::endl;
    return;
}

