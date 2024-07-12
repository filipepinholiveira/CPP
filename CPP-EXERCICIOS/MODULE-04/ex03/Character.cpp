#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// default constructor
Character::Character(/* args */)
{
    std::cout << "Character default constructor called" << std::endl;
    _name = "No name set";
    for (int i = 0; i < 4; i++)
    {
        Purse[i] = NULL;
        Floor[i] = NULL;
    }
}

// constructor with args
Character::Character(std::string name)
{
    std::cout << "Character constructor with args called" << std::endl;
    this->_name = name;
     for (int i = 0; i < 4; i++)
    {
        Purse[i] = NULL;
        Floor[i] = NULL;
    }
}

// copy constructor

    Character::Character(Character const &copy)
    {
        *this = copy;
    }


// operator =
    Character &Character::operator=(Character const &source)
    {
        if (this != &source)
        {
            this->_name = source._name;
        }
        return *this;
    }


// destructor
Character::~Character()
{
    std::cout << "Character default destructor called" << std::endl;
}



// ********************************* CANONICAL FORM INIT *********************************





// ********************************* OTHER FORM INIT *********************************


// getters




// setters



// methods

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{
    if (this->Purse[idx]->getType() == "ice")
    {
        Ice* ice = dynamic_cast<Ice*>(this->Purse[idx]);
        if (ice) 
        {
            ice->use(target);
        }
    }
    else if (this->Purse[idx]->getType() == "cure")
    {
        Cure* cure = dynamic_cast<Cure*>(this->Purse[idx]);
        if (cure) 
        {
            cure->use(target);
        }
    }
}


// operator <<



// ********************************* OTHER FORM INIT *********************************