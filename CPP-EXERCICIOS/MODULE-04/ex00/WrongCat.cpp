
#include "WrongCat.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// Default const
WrongCat::WrongCat(/* args */)
{
    std::cout << "Default wrong cat constructor called" << std::endl;
    type = "WrongCat";
    
}

// Copy constructor

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal()
{
    *this = copy;
}


// operator =

WrongCat &WrongCat::operator=(WrongCat &source)
{
    if (this != &source)
    {
        this->type = "Cat";
    }
    return *this;
}

// Destructor
WrongCat::~WrongCat()
{
    std::cout << "Default wrong cat destructor called" << std::endl;

}

// ********************************* CANONICAL FORM INIT *********************************




// ********************************* OTHER FORM INIT *********************************

// getters


// setters


// methods

void    WrongCat::makeSound()
{
    std::cout << "Miaaaaaaaaaaaau" << std::endl;
}

// operator <<


// ********************************* OTHER FORM INIT *********************************
