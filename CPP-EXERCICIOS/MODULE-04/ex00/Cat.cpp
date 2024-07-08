
#include "Cat.hpp"

// ********************************* CANONICAL FORM INIT *********************************


// default cat constructor
Cat::Cat()
{
    std::cout << "Default cat constructor called" << std::endl;
    type = "Cat";
}

// copy constructor
    Cat::Cat (Cat const &copy) : Animal()
    {
        *this = copy;
    }

// operator = 
    Cat &Cat::operator=(Cat const &source)
    {
        std::cout << "Cat Copy operator called" << std::endl;
        if (this != &source)
        {
            type = ("Cat");
        }
        return (*this);
    }


// default cat destructor
Cat::~Cat()
{

}

// ********************************* CANONICAL FORM INIT *********************************





// ********************************* OTHER FORM INIT *********************************

// getters


// setters


// methods

void Cat::makeSound() const
{
        std::cout << "Cat says Miaaaaaau" << std::endl;
}


// output operator overload

std::ostream &operator<<(std::ostream &output, const Cat &object)
{
    std::cout << "My Cat Object Info" << std::endl;
    std::cout << "Type: " << object.getType() << std::endl;
    object.makeSound();
    return output;
}


// ********************************* OTHER FORM INIT *********************************
