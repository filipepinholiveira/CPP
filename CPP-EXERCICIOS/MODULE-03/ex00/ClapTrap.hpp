
#pragma once

#include <iostream>


class ClapTrap
{
private:
    /* data */
    std::string _Name;
    static const int         _Hit = 0;
    static const int         _Energy = 0;
    static const int         _Atack = 0;

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

// ASSINED OPERATOR
   ClapTrap &operator=(ClapTrap const &source);

void attack(const std::string& target);

};

// OVERLOADS

//<< overload
std::ostream &operator<<(std::ostream &output, const ClapTrap &object);


