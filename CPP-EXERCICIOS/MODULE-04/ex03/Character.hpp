#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
private:
    /* data */
std::string _name;
AMateria *Purse[4];
AMateria *Floor[4];

public:

// ********************************* CANONICAL FORM INIT *********************************


// default constructor
    Character();

// constructor with args
    Character(std::string name);

// copy constructor

    Character(Character const &copy);


// operator =

    Character &operator=(Character const &source);


// destructor
    ~Character();



// ********************************* CANONICAL FORM INIT *********************************


// ********************************* OTHER FORM INIT *********************************


// getters



// setters



// methods

std::string const & getName() const;
void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);




// ********************************* OTHER FORM INIT *********************************


};

// operator <<




