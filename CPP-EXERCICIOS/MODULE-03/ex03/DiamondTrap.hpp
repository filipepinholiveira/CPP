
#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
private:
    
    std::string _Name;

public:
    
    // ********************************* CANONICAL FORM INIT *********************************

    // Default constructor
    DiamondTrap();

    // Constructor with args
    DiamondTrap(std::string name);

    // Copy constructor
    DiamondTrap (DiamondTrap const &copy);

    // assignment operator
    DiamondTrap &operator=(DiamondTrap const &source);

    // Destructor
    ~DiamondTrap();

    // ********************************* CANONICAL FORM INIT *********************************







    // ********************************* OTHER FORM INIT *********************************

    // getters
    std::string getDiamondName();

    // setters
    void    setDiamondName(std::string Name);

    using ScavTrap::attack;

    void whoAmI();

    // ********************************* OTHER FORM INIT *********************************
};

    // object print overload
    std::ostream &operator<<(std::ostream &input, const DiamondTrap &object);