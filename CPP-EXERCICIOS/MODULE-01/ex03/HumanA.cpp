
#include "Weapon.hpp"

//simple constructor
// HumanA::HumanA()
// {
//     std::cout << "Simple constructor called" << std::endl;
// }


HumanA::HumanA(std::string name_set, Weapon &weapon_set) : _Name(name_set), _Weapon(weapon_set)
{
    //std::cout << "Construtor with args called" << std::endl;
}

// destructor
HumanA::~HumanA()
{
    //std::cout << "Destructor called" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->_Name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
