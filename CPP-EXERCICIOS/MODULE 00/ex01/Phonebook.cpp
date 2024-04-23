
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    //std::cout << "Contact Constructor called" << std::endl;
    return;
}
Phonebook::~Phonebook()
{
    //std::cout << "Contact Destructor called" << std::endl;
    return;
}

Contact* Phonebook::getList()
{ 
    return List; 
}
