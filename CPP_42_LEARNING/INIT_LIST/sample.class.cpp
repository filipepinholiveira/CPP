
#include <iostream>
#include "sample.class.hpp"

Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
    std::cout << "Constructor called" << std::endl;
    std::cout << a1 << " " << a2 << " " << a3 << std::endl;


}

Sample::~Sample()
{
    std::cout << "Destructor called" << std::endl;
}
