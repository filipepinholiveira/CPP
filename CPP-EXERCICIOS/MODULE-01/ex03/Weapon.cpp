
#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    setType(name);
}

// destructor
Weapon::~Weapon()
{
    //std::cout << "Destructor called" << std::endl;
}


std::string    Weapon::getType() const
{
    return(this->_type);
}

void        Weapon::setType(std::string new_type)
{
    this->_type = new_type;
}
