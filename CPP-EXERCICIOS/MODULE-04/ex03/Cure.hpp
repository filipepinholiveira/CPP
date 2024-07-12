#pragma once
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
    

public:


// default constructor
Cure();

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





