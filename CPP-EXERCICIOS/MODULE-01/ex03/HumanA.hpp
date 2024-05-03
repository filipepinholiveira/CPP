
#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{


private:
    std::string _Name;
    Weapon &_Wepon;

public:

    // simple constructor
    HumanA();

    // destructor
    ~HumanA();

};


#endif