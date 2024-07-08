#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */

public:

// ********************************* CANONICAL FORM INIT *********************************

// Default const
    WrongCat(/* args */);

// Copy constructor

WrongCat(WrongCat &copy);


// operator =

WrongCat &operator=(WrongCat &source);


// destructor
    ~WrongCat();

// ********************************* CANONICAL FORM INIT *********************************


// ********************************* OTHER FORM INIT *********************************

// getters


// setters


// methods

void    makeSound();


// ********************************* OTHER FORM INIT *********************************


};

// operator <<



