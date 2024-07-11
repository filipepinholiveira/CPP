#include "Ice.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// default constructor
Ice::Ice()
{
    std::cout << "Ice default constructor called" << std::endl;
    this->_type = "ice";
}

// copy constructor

Ice::Ice (Ice const &copy)
{
    *this = copy;
}



// operator =

Ice &Ice::operator=(Ice const &source)
{
    if (this != &source)
        this->_type = "ice";
}



// destructor
Ice::~Ice()
{
    std::cout << "Ice default destructor called" << std::endl;
}


// ********************************* CANONICAL FORM INIT *********************************





// ********************************* OTHER FORM INIT *********************************


// getters




// setters



// methods

AMateria* Ice::clone() const
{
    return new Ice;
} 

void Ice::use(ICharacter& target)
{
    std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}



// operator <<



// ********************************* OTHER FORM INIT *********************************
