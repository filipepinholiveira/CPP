
#include <iostream>
#include "sample.class.hpp"

Sample::Sample()
{
    std::cout << "Constructor called" << std::endl;
    this->_foo = 0;

    return;
}

Sample::~Sample()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::setFoo(int v)
{
    if (v >= 0)
    {
        this->_foo = v;
        std::cout << "Foo setted to " << v << std::endl;
    }
    return;
}
void    Sample::getFoo(void) const
{
    std::cout << "Foo: " << this->_foo << std::endl;
}

void    Sample::plusFoo(void)
{
    if (this->_foo >= 0)
    {
        this->_foo++;
        std::cout << "Foo increased" << std::endl;

    }
}

void    Sample::lessFoo(void)
{
    if (this->_foo > 0)
    {
        this->_foo--;
        std::cout << "Foo decreased" << std::endl;

    }
}
