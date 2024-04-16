
#include <iostream>
#include "sample.class.hpp"

Sample::Sample()
{
    std::cout << "Constructor called" << std::endl;
    std::cout << "Value to assigne to publicBar: " << std::endl;
    std::cin >> publicFoo;
    std::cout << "Value to assigne to _privateBar: " << std::endl;
    std::cin >> _privateFoo;
    this->publicBar();
    this->_privateBar();
    return;
}

Sample::~Sample()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::publicBar(void) const

{
    std::cout << "PublicBar function called"  << std::endl;
    std::cout << " Value give: " << publicFoo << std::endl;
    return;
}

void    Sample::_privateBar(void) const
{
    std::cout << "PrivateBar function called"  << std::endl;
    std::cout << " Value give: " << _privateFoo << std::endl;
    return;
}
