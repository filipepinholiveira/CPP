
#include "ClapTrap.hpp"

// default constructor
ClapTrap::ClapTrap() : _Name("No name boy"), _Hit(10), _Energy(10), _Atack(0)
{
    std::cout << "Claptrap Default constructor called" << std::endl;
}

// Costructor with _Name arg init
    ClapTrap::ClapTrap (std::string Name) : _Name(Name),  _Hit(10), _Energy(10), _Atack(0)
    {
        std::cout << "Claptrap Constructor with _Name arg called" << std::endl;
    }

// // copy constructor
ClapTrap::ClapTrap (ClapTrap const &copy)
{
    *this = copy;
}


// destructor
ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap Destructor called" << std::endl;
}

// GETTERS

std::string    ClapTrap::getName() const
{
    return(this->_Name);
}

int     ClapTrap::getHit() const
{
    return (this->_Hit);
}

int     ClapTrap::getEnergy() const
{
    return (this->_Energy);
}

int     ClapTrap::getAtack() const
{
    return (this->_Atack);
}

// METHODS

void ClapTrap::attack(const std::string& target)
{
    if (this->_Energy > 0 && this->_Hit > 0)
    {
        this->_Energy--;
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->getHit() << " of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_Hit > 0)
        this->_Hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_Energy > 0 && this->_Hit > 0)
        this->_Hit += amount;
}

//assigned operator
ClapTrap &ClapTrap::operator=(ClapTrap const &source)
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

std::ostream &operator<<(std::ostream &output, const ClapTrap &object)
{
    std::cout << "My Clap Boy" << std::endl;
    output << "Name: " << object.getName() << std::endl;
    output << "Hit: " << object.getHit() << std::endl;
    output << "Energy: " << object.getEnergy() << std::endl;
    output << "Atack: " << object.getAtack() << std::endl;

    return output;
}