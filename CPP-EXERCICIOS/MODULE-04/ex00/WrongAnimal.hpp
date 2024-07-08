
#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    /* data */
    std::string type;
public:

// ********************************* CANONICAL FORM INIT *********************************

// Default constructor
    WrongAnimal();

// Copy constructor

WrongAnimal (WrongAnimal &copy);

// operator =

WrongAnimal &operator=(WrongAnimal const &source);

// Destructor
    ~WrongAnimal();

// ********************************* CANONICAL FORM INIT *********************************



// ********************************* OTHER FORM INIT *********************************

// setters



// getters
std::string getType() const;


// methods

void    makeSound();



// ********************************* OTHER FORM INIT *********************************

};
// operator <<