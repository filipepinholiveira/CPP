#include "Cure.hpp"


// ********************************* CANONICAL FORM INIT *********************************

// default constructor
Cure::Cure()
{
    std::cout << "Cure default constructor called" << std::endl;
        this->_type = "cure";
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
        this->_type = "cure";
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

AMateria* Cure::clone() const
{
    return new Cure;
} 

void Cure::use(ICharacter& target)
{
    std::cout << "heals " << target.getName() << "’s wounds" << std::endl;

} 



// operator <<



// ********************************* OTHER FORM INIT *********************************
