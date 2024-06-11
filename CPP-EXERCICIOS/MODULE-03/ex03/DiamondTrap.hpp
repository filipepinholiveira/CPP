
#pragma once
#include "ClapTrap.hpp"

class DiamondTrap : public ClapTrap
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

    // object print overload


    // ********************************* OTHER FORM INIT *********************************
};

    std::ostream &operator<<(std::ostream &input, const DiamondTrap &object);