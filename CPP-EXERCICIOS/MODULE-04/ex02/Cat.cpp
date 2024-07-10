
#include "Cat.hpp"

// ********************************* CANONICAL FORM INIT *********************************


// default cat constructor
Cat::Cat()
{
    std::cout << "Default cat constructor called" << std::endl;
    type = "Cat";
    _Brain = new Brain;
    std::cout << "Setting ideias for cat: " << std::endl;
    const char* array[] = {"Gato", "Gatinho", "Gatao"};
    _Brain->set_ideas(3, array);
    for (int i = 0; i < 3; i++)
        std::cout << _Brain->get_ideas(i) << std::endl;
}

// copy constructor
    Cat::Cat (Cat const &copy) : Animal()
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = copy;
    }

// operator = 
    Cat &Cat::operator=(Cat const &source)
    {
        std::cout << "Cat Copy operator called" << std::endl;
        if (this != &source)
        {
            type = ("Cat");
            this->_Brain = new Brain(*source._Brain);
            //this->_Brain = source._Brain;
        }
        return (*this);
    }


// default cat destructor
Cat::~Cat()
{
    std::cout << "Default cat destructor called" << std::endl;
    delete(_Brain);
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
