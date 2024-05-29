
#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
private:
    /* data */
    std::string _Name;
    int         _Hit;
    int         _Energy;
    int         _Atack;

public:

// CONSTRUCTORS

    // default constructor
    ClapTrap();

    // Costructor with _Name arg init
    ClapTrap (std::string Name);
    
    // copy constructor
    ClapTrap (ClapTrap const &copy);
    
    // destructor
    ~ClapTrap();


// GETTERS

    std::string    getName() const;
    int     getHit() const;
    int     getEnergy() const;
    int     getAtack() const;

// METHODS

void attack(const std::string& target);

void takeDamage(unsigned int amount);

void beRepaired(unsigned int amount);


// ASSINED OPERATOR
   ClapTrap &operator=(ClapTrap const &source);

};

//OVERLOADS

//<< overload
std::ostream &operator<<(std::ostream &output, const ClapTrap &object);


