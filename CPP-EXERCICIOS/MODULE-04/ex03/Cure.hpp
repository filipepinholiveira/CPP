#pragma once
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
    std::string _type;

public:


// default constructor
Cure(/* args */);

// copy constructor

Cure (Cure const &copy);


// operator =

Cure &operator=(Cure const &source);


//destructor
~Cure();

// ********************************* CANONICAL FORM INIT *********************************





// ********************************* OTHER FORM INIT *********************************


// getters




// setters



// methods


AMateria* clone() const; // definidos apenas nas classes derivadas

void use(ICharacter& target); // definidos apenas nas classes derivadas




// ********************************* OTHER FORM INIT *********************************


};

// operator <<




