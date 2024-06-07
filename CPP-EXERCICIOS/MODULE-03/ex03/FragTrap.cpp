#include "FragTrap.hpp"


// ********************************* CANONICAL FORM *********************************

// default constructor
FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;

    this->_Name = "No name boy";
    this->_Hit = 100;
    this->_Energy = 100;
    this->_Atack = 30;
}

// Constructor with name arg
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor with name arg called" << std::endl;

    this->_Name = name;
    this->_Hit = 100;
    this->_Energy = 100;
    this->_Atack = 30;
}

// copy constructor
FragTrap::FragTrap (FragTrap const &copy) : ClapTrap()
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
}

// assigned operator
FragTrap &FragTrap::operator=(FragTrap const &src)
{
    if (this != &src)
    {
        this->_Name = src.getName();
        this->_Hit = src.getHit();
        this->_Energy = src.getEnergy();
        this->_Atack = src. getAtack();
    }
    return *this;
}


// destructor
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

// ********************************* CANONICAL FORM *********************************




// ********************************* OTHER FORM *********************************

//methods
void FragTrap::highFivesGuys(void)
{
    std::cout << "Give me those five fingers and let's get High... Five" << std::endl;
}

// operator << overload
std::ostream &operator<<(std::ostream &output, FragTrap const &src)
{
    std::cout << "My Frag Boy" << std::endl;
    output << "Name: " << src.getName() << std::endl;
    output << "Hit " << src.getHit() << std::endl;
    output << "Energy: " << src.getHit() << std::endl;
    output << "Atack: " << src.getAtack() << std::endl;

    return output;
}


// ********************************* OTHER FORM *********************************