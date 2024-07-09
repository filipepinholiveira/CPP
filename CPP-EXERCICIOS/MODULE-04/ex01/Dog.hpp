#pragma once
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{

private:
    /* data */


public:

    // ********************************* CANONICAL FORM INIT *********************************

    // default dog constructor
    Dog(/* args */);

    // copy constructor

    Dog(Dog const &copy);

    // operator = 

    Dog &operator=(Dog const &source);

    // default dog destructor
    ~Dog();

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



