
#include "AAnimal.hpp"


// ********************************* CANONICAL FORM INIT *********************************


// Default constructor
Animal::Animal()
{
    std::cout << "Default animal constructor called" << std::endl;
    type = "No type set";
}

// Constructor with args


// Copy constructor

Animal::Animal(Animal const &copy)
{
    *this = copy;
}

// assignment operator

Animal &Animal::operator=(Animal const &source)
{
    if (this != &source)
    {
        type = getType();
    }
    return *this;
}


Animal::~Animal()
{
    std::cout << "Default animal destructor called" << std::endl;
}


// ********************************* CANONICAL FORM INIT *********************************


// ********************************* OTHER FORM INIT *********************************

    // getters

    std::string Animal::getType() const
    {
        return(this->type);
    }

    // setters


    // methods

    void Animal::makeSound() const
    {
        std::cout << "No animal to make a sound" << std::endl;
    }


    // object print overload
    std::ostream &operator<<(std::ostream &output, const Animal &object)
    {
        std::cout << "My Animal Object Info" << std::endl;
        std::cout << "Type: " << object.getType() << std::endl;
        object.makeSound();
        return output;
    }

    // ********************************* OTHER FORM INIT *********************************