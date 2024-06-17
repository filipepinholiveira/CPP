
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
    std::cout << "ScavTrap Constructor with _Name arg called" << std::endl;
    
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

// METHODS

    void ScavTrap::guardGate()
    {
        std::cout << "I'm in Gate keeper mode" << std::endl;
    }

    void ScavTrap::attack(const std::string& target)
{
    if (this->_Energy > 0 && this->_Hit > 0)
    {
        this->_Energy--;
        std::cout << "Scavtrap " << this->_Name << " attacks " << target << " causing " << this->getAtack() << " of damage!" << std::endl;
    }
}

//OVERLOAD OPERATORS

std::ostream &operator<<(std::ostream &output, const ScavTrap &object)
{
    std::cout << "My Scav Boy" << std::endl;
    output << "Name: " << object.getName() << std::endl;
    output << "Hit: " << object.getHit() << std::endl;
    output << "Energy: " << object.getEnergy() << std::endl;
    output << "Atack: " << object.getAtack() << std::endl;

    return output;
}

// *****************      OTHER     *******************