#pragma once

#include <iostream>
#include <string>

class Animal
{
protected:
    /* data */
    std::string type;
    
public:

    // ********************************* CANONICAL FORM INIT *********************************

    // Default constructor
    Animal();

     // Copy constructor

    Animal(Animal const &copy);

    // assignment operator

    Animal &operator=(Animal const &source);

    // Destructor
    virtual ~Animal();

    // ********************************* CANONICAL FORM INIT *********************************





    // ********************************* OTHER FORM INIT *********************************

    // getters


    // setters

    std::string getType() const;

    // methods

    virtual void makeSound() const = 0;

    // ********************************* OTHER FORM INIT *********************************

};

// object print overload

std::ostream &operator<<(std::ostream &output, const Animal &object);
