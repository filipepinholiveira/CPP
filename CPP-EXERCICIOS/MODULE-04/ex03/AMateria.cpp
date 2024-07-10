#include "AMateria.hpp"


// ********************************* CANONICAL FORM INIT *********************************

// default constructor
AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
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
            this->_type = source._type;
        }
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



//operator <<


// ********************************* OTHER FORM INIT *********************************
