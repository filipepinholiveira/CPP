#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// Default constructor
DiamondTrap::DiamondTrap() 
{
    std::cout << "DiamondTrap constructor called" << std::endl;

    this->_Name = "No name boy";
      // std::cout << "Analise: " << ClapTrap::getName() + "_clap_name" << std::endl;
    std::cout << "Analise _Name: " << _Name << std::endl;
    this->_Hit = FragTrap::getHit();
    this->_Energy = ScavTrap::getEnergy();
    this->_Atack = FragTrap::_Atack;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap constructor with args called" << std::endl;
    ClapTrap::_Name = name  + "_clap_name";
    this->_Name = name;
    this->_Hit = FragTrap::getHit();
    this->_Energy = ScavTrap::getEnergy();
    this->_Atack = FragTrap::_Atack;
} 

// Copy constructor
DiamondTrap::DiamondTrap (DiamondTrap const &copy) : ClapTrap(), FragTrap(), ScavTrap()
{
    *this = copy;
}

// assignment operator
DiamondTrap &DiamondTrap::operator=(DiamondTrap const &source)
{
    if (this != &source)
    {
        this->_Name = source.getName();
        this->_Hit = source.getHit();
        this->_Energy = source.getEnergy();
        this->_Atack = source.getAtack();
    }
    return *this;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

// ********************************* CANONICAL FORM INIT *********************************







// ********************************* OTHER FORM INIT *********************************

// getters
std::string DiamondTrap::getDiamondName()
{
    return (this->_Name);
}

// setters
void    DiamondTrap::setDiamondName(std::string Name)
{
    this->_Name = Name;
}

void DiamondTrap::whoAmI()
{
    std::cout << "ClapTrap name: " << ClapTrap::_Name << std::endl;
    std::cout << "DiamondTrap name: " << DiamondTrap::_Name << std::endl;
}


std::ostream &operator<<(std::ostream &output, const DiamondTrap &object)
{
    std::cout << "My Diamond Boy" << std::endl;
    output << "Name: " << object.getName() << std::endl;
    output << "Hit: " << object.getHit() << std::endl;
    output << "Energy: " << object.getEnergy() << std::endl;
    output << "Atack: " << object.getAtack() << std::endl;

    return output;
}

// ********************************* OTHER FORM INIT *********************************