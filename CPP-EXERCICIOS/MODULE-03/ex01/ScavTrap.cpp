
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// ***************** CANONICAL FORM ****************

// default constructor
ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default Scavtrap constructor called" << std::endl;

    this->_Name = "No name boy";
    this->_Hit = 100;
    this->_Energy = 50;
    this->_Atack = 20;
}

// Costructor with _Name arg init
ScavTrap::ScavTrap (std::string Name) : ClapTrap(Name)
{
    std::cout << "Constructor with _Name arg called" << std::endl;
    
    this->_Name = Name;
    this->_Hit = 100;
    this->_Energy = 50;
    this->_Atack = 20;
}

// copy constructor
ScavTrap::ScavTrap (ScavTrap const &copy) : ClapTrap()
{
        std::cout << "Scavtrap Copy constructor called" << std::endl;
        *this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &source)
{
    if (this != &source)
    {
        this->_Name = source.getName();
        this->_Hit = source.getHit();
        this->_Energy = source.getEnergy();
        this->_Atack = source.getAtack();
    }
        return (*this);
}

// destructor
ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap destructor called" << std::endl;
}

// ***************** CANONICAL FORM ****************


// *****************      OTHER     *******************


// *****************      OTHER     *******************