#pragma once
#include <iostream>
#include <string>

class AMateria
{
private:

    std::string _type;

public:

// ********************************* CANONICAL FORM INIT *********************************

// default constructor
    AMateria();

// constructor with args
AMateria(std::string const & type);

// copy constructor
    AMateria (AMateria const &copy);


// operator =
    AMateria &operator=(AMateria const &source);


// destructor
    ~AMateria();

// ********************************* CANONICAL FORM INIT *********************************



// ********************************* OTHER FORM INIT *********************************

// getters

std::string const & getType() const;


//setters



// methods

virtual AMateria* clone() const = 0; // definidos apenas nas classes derivadas

virtual void use(ICharacter& target); // definidos apenas nas classes derivadas



// ********************************* OTHER FORM INIT *********************************


};

//operator <<