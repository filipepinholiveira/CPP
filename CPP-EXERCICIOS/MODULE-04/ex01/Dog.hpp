#pragma once
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{

private:
    /* data */
    Brain *_Brain;

public:

    // ********************************* CANONICAL FORM INIT *********************************

    // default dog constructor
    Dog();

    // copy constructor

    Dog(Dog const &copy);

    // operator = 

    Dog &operator=(Dog const &source);

    // default dog destructor
    virtual ~Dog();

    // ********************************* CANONICAL FORM INIT *********************************





    // ********************************* OTHER FORM INIT *********************************

    // getters


    // setters


    // methods

    void makeSound() const;

    // ********************************* OTHER FORM INIT *********************************

};

// output operator overload
std::ostream &operator<<(std::ostream &output, const Dog &object);



