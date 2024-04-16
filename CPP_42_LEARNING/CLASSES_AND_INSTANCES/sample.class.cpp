
#include <iostream>
#include "sample.class.hpp"

Sample::Sample()
{
    std::cout << "Constructor called" << std::endl;
    std::cout << "Idade em 2024? ";
    std::cin >> idade;
    std::cout << "Idade: " << idade << std::endl;
    return;
}
void    Sample::function(std::string name)
{
    std::cout << "My name is " << name << std::endl;
    std::cout << "My age is " << idade << std::endl;
}

Sample::~Sample()
{
    std::cout << "Destructor called" << std::endl;
    return;
}
