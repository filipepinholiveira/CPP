#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;
// ********************************* CANONICAL FORM INIT *********************************

// default constructor
AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
    _type = "No type defined";
}


// constructor with args
AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria constructor with args called" << std::endl;
    this->_type = type;
}


// copy constructor
AMateria::AMateria (AMateria const &copy)
{
    *this = copy;
}


// operator =
    AMateria &AMateria::operator=(AMateria const &source)
    {
        if (this != &source)
        {
            this->_type = source.getType();
        }
        return (*this);
    }


// destructor
AMateria::~AMateria()
{
    std::cout << "AMateria default destructor called" << std::endl;
}



// ********************************* CANONICAL FORM INIT *********************************






// ********************************* OTHER FORM INIT *********************************

// getters

std::string const & AMateria::getType() const
{
    return this->_type;
}

//setters



// methods

void AMateria::use(ICharacter& target) 
{
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}



//operator <<


// ********************************* OTHER FORM INIT *********************************
