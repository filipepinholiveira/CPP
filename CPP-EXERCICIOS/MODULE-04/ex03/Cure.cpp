#include "Cure.hpp"


// ********************************* CANONICAL FORM INIT *********************************

// default constructor
Cure::Cure(/* args */)
{
    std::cout << "Cure default constructor called" << std::endl;
    
}



// copy constructor
Cure::Cure (Cure const &copy)
{
    *this = copy;
}



// operator =
Cure &Cure::operator=(Cure const &source)
{
    if (this != &source)
        _type = "cure";
}




// destructor
Cure::~Cure()
{
    std::cout << "Cure default destructor called" << std::endl;
}

// ********************************* CANONICAL FORM INIT *********************************





// ********************************* OTHER FORM INIT *********************************


// getters




// setters



// methods



// operator <<



// ********************************* OTHER FORM INIT *********************************
