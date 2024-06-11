#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;

    this->_Name = "No name boy";
    
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
    std::cout << "DiamondTrap constructor with args called" << std::endl;
    this->_Name = name;
    
}

// Copy constructor
DiamondTrap::DiamondTrap (DiamondTrap const &copy) : ClapTrap()
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