
#include "Weapon.hpp"

// simple constructor
HumanB::HumanB(std::string name_set) : _Name(name_set)
{
    this->_Weapon = NULL;
    //std::cout << "Construtor with args called" << std::endl;
}

// destructor
HumanB::~HumanB()
{
    //std::cout << "Destructor called" << std::endl;
}

void    HumanB::setWeapon(Weapon *add_weapon)
{
        if(add_weapon)
            this->_Weapon = add_weapon;

}

void    HumanB::attack()
{
    if(this->_Weapon)
     std::cout << this->_Name << " attacks with their " << this->_Weapon->getType() << std::endl;
}