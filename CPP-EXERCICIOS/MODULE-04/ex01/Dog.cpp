
#include "Dog.hpp"


// ********************************* CANONICAL FORM INIT *********************************

// Default dog constructor 
Dog::Dog(/* args */) 
{
    std::cout << "Default dog constructor called" << std::endl;
    type = "Dog";
    _Brain = new Brain;
    std::cout << "Setting ideias for Dog: " << std::endl;
    const char* caoarray[] = {"Cao", "Caozinho", "Caozao"};
    _Brain->set_ideas(3, caoarray);
    for (int i = 0; i < 3; i++)
        std::cout << _Brain->get_ideas(i) << std::endl;
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
        this->_Brain = new Brain(*source._Brain);
    }
    return *this;
}

// Default dog destructor 
Dog::~Dog()
{
    std::cout << "Default dog destructor called" << std::endl;
    delete(_Brain);
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
