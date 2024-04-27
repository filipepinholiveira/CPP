
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    //std::cout << "Phonebook Constructor called" << std::endl;
    return;
}
Phonebook::~Phonebook()
{
    //std::cout << "Phonebook Destructor called" << std::endl;
    return;
}

Contact* Phonebook::getList()
{ 
    return List; 
}
