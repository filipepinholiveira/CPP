
#include "Dog.hpp"


// ********************************* CANONICAL FORM INIT *********************************

// Default dog constructor 
Dog::Dog(/* args */) 
{
    std::cout << "Default dog constructor called" << std::endl;
    type = "Dog";
    new Brain;
}


// copy constructor

Dog::Dog(Dog const &copy) : Animal()
{
    std::cout << "Copy constructor called" << std::endl;

    *this = copy;
}

// operator = 

Dog &Dog::operator=(Dog const &source)
{
    std::cout << "Dog Copy operator called" << std::endl;
    if (this != &source)
    {
        this->type = "Dog";
    }
    return *this;
}

// Default dog destructor 
Dog::~Dog()
{
    std::cout << "Default dog destructor called" << std::endl;
}

// ********************************* CANONICAL FORM INIT *********************************



// ********************************* OTHER FORM INIT *********************************

// getters


// setters


// methods

void Dog::makeSound() const
{
        std::cout << "Dog says Au au" << std::endl;
}

// output operator overload
std::ostream &operator<<(std::ostream &output, const Dog &object)
{
        std::cout << "My Dog Object Info" << std::endl;
        std::cout << "Type: " << object.getType() << std::endl;
        object.makeSound();
        return output;
}


// ********************************* OTHER FORM INIT *********************************
