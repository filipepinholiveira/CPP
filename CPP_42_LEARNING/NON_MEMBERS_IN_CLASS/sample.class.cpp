
#include <iostream>
#include "sample.class.hpp"

int Sample::_noMember = 0;

Sample::Sample()
{
    std::cout << "Constructor called" << std::endl;
    // no member inicializado no constuctor
    Sample::_noMember+=1; 
    return;
}

Sample::~Sample()
{
    std::cout << "Destructor called" << std::endl;
    Sample::_noMember-=1; 
    return;
}

int  Sample::getInstNbr(void)
{
    return Sample::_noMember;
}
