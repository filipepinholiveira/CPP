


#include "sample.hpp"
#include <iostream>


// simple constructor
sample::sample() : _age(0)
{
    std::cout << "Simple constructor called" << std::endl;
    return ;
}

// constructor with atributtes
sample::sample(int age) : _age(age)
{
    std::cout << "Args constructor called" << std::endl;

    return ;
}

// copy constuctor
sample::sample(sample const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return ;
}

// destrutor
sample::~sample()
{
    std::cout << "Destructor called" << std::endl;
}

// (private) name getter
int sample::getter() const
{
    return (this->_age);
}

// assignment operator
sample &   sample::operator=(sample const & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->_age = rhs.getter();
    return *this;
}

std::ostream &  operator<<(std::ostream & o, sample const & i)
{
    o << "Age is " << i.getter();
    return o;
}

