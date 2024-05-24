
#include "ClapTrap.hpp"

// default constructor
ClapTrap::ClapTrap(/* args */)
{
    std::cout << "Default constructor called" << std::endl;
}

// Costructor with _Name arg init
    ClapTrap::ClapTrap (std::string Name) : _Name(Name)
    {
        std::cout << "Constructor with _Name arg called" << std::endl;
    }

// // copy constructor
ClapTrap::ClapTrap (ClapTrap const &copy)
{
    *this = copy;
}

// destructor
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
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

//assigned operator
ClapTrap &ClapTrap::operator=(ClapTrap const &source) : _Hit(source.getHit()), _Energy(source.get)
{
    // if (this != &source)
    // {
    //     this->_Name = source.getName();
    //     this->_Hit = source.getHit();
    //     this->_Energy = source.getEnergy();
    //     this->_Atack = source.getAtack();
    // }
    return *this;
}

std::ostream &operator<<(std::ostream &output, const ClapTrap &object)
{
    output << object;
    return output;
}