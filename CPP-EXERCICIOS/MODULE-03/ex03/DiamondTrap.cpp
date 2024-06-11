#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;

    this->_Name = "No name boy";
    this->_Hit = 100;
    this->_Energy = 100;
    this->_Atack = 30;
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

// ********************************* OTHER FORM INIT *********************************