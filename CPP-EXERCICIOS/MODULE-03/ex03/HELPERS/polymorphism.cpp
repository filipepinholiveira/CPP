
#include "polymorphism.hpp"


//////////////////////////// CLASS BASE /////////////////////////////


square::square(int x)
{
    std::cout << "Constructor with args called\n";
    this->_x = x;
}

void square::setter(int x)
{
    this->_x = x;
}

int square::getterX() const
{
    return (this->_x);
}

void    square::print()
{
    std::cout << "Square!\n";
}

square::~square()
{
    std::cout << "Destructor called\n";
}


////////////////////// CLASS CHILD

rectangle::rectangle(int x, int y) : square(x)
{
    std::cout << "Constructor with args called\n";
    _y = y;
}

void rectangle::setter(int y)
{
    this->_y = y;
}

int rectangle::getterY() const
{
    return (this->_y);
}

void    rectangle::print()
{
    std::cout << "Rectangle!\n";
}

rectangle::~rectangle()
{
    std::cout << "Destructor called\n";
}


void    print_call(square &input)
{
    input.print();
}



//////////////////// CHILD CLASS ///////



Foo::Foo(int x, int y) : rectangle(x, y)
{
    std::cout << "Constructo called\n";
}

void    Foo::print()
{
    std::cout << "Foo!\n";
}


Foo::~Foo()
{
    std::cout << "Destructor called\n";
}

