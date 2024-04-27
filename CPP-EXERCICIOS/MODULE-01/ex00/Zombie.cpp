
#include "Zombie.hpp"


//Constructor
Zombie::Zombie()
{
    std::cout << "Constructor called for zombie without args" << std::endl;
}

Zombie::Zombie(std::string NAME_GIVEN)
{
    std::cout << "Constructor called for zombie " << NAME_GIVEN << std::endl; 
    this->_Name = NAME_GIVEN;
    
}

// Destructor
Zombie::~Zombie()
{
    std::cout << "Destructor called for zombie " << std::endl; 
}

void    Zombie::announce(void)
{
    std::cout << this->_Name << "says Braaaaaainz" << std::endl;
}

