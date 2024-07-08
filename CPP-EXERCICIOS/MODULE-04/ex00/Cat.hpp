#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */

public:

    // ********************************* CANONICAL FORM INIT *********************************

    // default cat constructor
    Cat();

    // copy constructor
    Cat (Cat const &copy);

    // operator = 
    Cat &operator=(Cat const &source);

    // default cat destructor
    ~Cat();

    // ********************************* CANONICAL FORM INIT *********************************





    // ********************************* OTHER FORM INIT *********************************

    // getters


    // setters


    // methods

    void makeSound() const;

    // ********************************* OTHER FORM INIT *********************************

};

// output operator overload
std::ostream &operator<<(std::ostream &output, const Cat &object);


