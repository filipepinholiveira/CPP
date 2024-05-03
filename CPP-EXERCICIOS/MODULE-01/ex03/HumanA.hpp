
#ifndef HUMAN_A_H
#define HUMAN_A_H


class Weapon;

class HumanA
{


private:
    std::string _Name;
    Weapon &_Weapon;

public:

    // // default constructor
    // HumanA();

    // constructor with args
    HumanA(std::string name_set, Weapon &weapon_set);

    // destructor
    ~HumanA();
    
    void    attack();

};


#endif