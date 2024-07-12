#include "Cure.hpp"
#include "ICharacter.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// default constructor
Cure::Cure() : AMateria("Cure")
{
    std::cout << "Cure default constructor called" << std::endl;
    
}



// copy constructor
Cure::Cure (Cure const &copy) : AMateria()
{
    *this = copy;
}



// operator =
Cure &Cure::operator=(Cure const &source)
{
    if (this != &source)
        this->_type = "cure";
    return *this;
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
	// return ( new Cure( *this ));
    
} 

void Cure::use(ICharacter& target)
{
    std::cout << "heals " << target.getName() << "’s wounds" << std::endl;
} 



// operator <<



// ********************************* OTHER FORM INIT *********************************
