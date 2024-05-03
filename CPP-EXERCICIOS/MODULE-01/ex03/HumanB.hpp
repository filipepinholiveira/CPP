
#ifndef HUMAN_B_H
#define HUMAN_B_H

class Weapon;

class HumanB
{


private:

    std::string _Name;
    Weapon *_Weapon;

public:

    // constructor with args
    HumanB(std::string name_set);

    // destructor
    ~HumanB();

    void    setWeapon(Weapon *add_weapon);
    void    attack();

};


#endif