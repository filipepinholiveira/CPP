
#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"


class Weapon
{
    
private:

    std::string _type;
    
public:

    // constructor with args
    Weapon(std::string name);

    // destructor
    ~Weapon();

    // Methods
    std::string getType() const;
    void        setType(std::string new_type);

};




#endif