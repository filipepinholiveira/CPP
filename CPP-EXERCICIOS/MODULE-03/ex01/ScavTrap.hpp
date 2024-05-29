#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    /* data */

public:

// ***************** CANONICAL FORM ****************

    //CONSTRUCTORS
    
    // default constructor
    ScavTrap();

    // Costructor with _Name arg init
    ScavTrap (std::string Name);

    // copy constructor
    ScavTrap (ScavTrap const &copy);

    // destructor
    ~ScavTrap();

    // ASSIGNED OPERATOR

    ScavTrap &operator=(ScavTrap const &source);

// ***************** CANONICAL FORM *******************


// *****************      OTHER     *******************

    // METHODS


    //OVERLOAD OPERATORS


// *****************      OTHER     *******************

};



