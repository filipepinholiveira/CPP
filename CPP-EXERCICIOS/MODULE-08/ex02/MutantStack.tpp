#include "MutantStack.hpp"

MutantStack::MutantStack()
{
    std::cout << "Default constructor called" << std::endl;
}

MutantStack::~MutantStack()
{
    std::cout << "Default destructor called" << std::endl;

}

MutantStack::MutantStack (MutantStack const &copy)
{
    *this = copy;
}
MutantStack &MutantStack::operator=(MutantStack const &source)
{
    if (this != &source)
    {
         //copy definition
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, MutantStack& value)
{
    (void) value;
    return o;
}