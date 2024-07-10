#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    /* data */
    Brain *_Brain;
public:

    // ********************************* CANONICAL FORM INIT *********************************

    // default cat constructor
    Cat();

    // copy constructor
    Cat (Cat const &copy);

    // operator = 
    Cat &operator=(Cat const &source);

    // default cat destructor
    virtual ~Cat();

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


