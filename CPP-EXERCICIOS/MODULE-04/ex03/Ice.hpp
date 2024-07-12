#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
protected:
    /* data */
    

public:

// ********************************* CANONICAL FORM INIT *********************************

// default constructor
Ice();

// copy constructor

Ice (Ice const &copy);


// operator =

Ice &operator=(Ice const &source);


// destructor
~Ice();

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



