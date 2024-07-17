#include "WrongAnimal.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// Default constructor
WrongAnimal::WrongAnimal()
{
    std::cout << "Default wrong animal constructor called" << std::endl;
    type = ("Wroooooooooooong Animal");

}

// Copy constructor
WrongAnimal::WrongAnimal (WrongAnimal &copy)
{
    *this = copy;
}


// operator =

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &source)
{
    if (this != &source)
    {
        this->type = "QQ cena";
    }
    return *this;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
    std::cout << "Default wrong animal destructor called" << std::endl;
}

// ********************************* CANONICAL FORM INIT *********************************


// ********************************* OTHER FORM INIT *********************************

// setters



// getters
 std::string WrongAnimal::getType() const
{
    return(this->type);
}

// methods

void    WrongAnimal::makeSound()
{
    std::cout << "Sound from animal" << std::endl;
}

// operator <<

// ********************************* OTHER FORM INIT *********************************

