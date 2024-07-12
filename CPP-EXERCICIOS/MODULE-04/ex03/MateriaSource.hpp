#pragma once
#include "IMateria.hpp"
#include "AMateria.hpp"


// ********************************* CANONICAL FORM INIT *********************************

class AMateria;

class MateriaSource : public IMateriaSource
{
private:
    /* data */
    AMateria *LearnBook[3];

public:

// default constructor
    MateriaSource();


// copy constructor

MateriaSource (MateriaSource const &copy);


// operator =

MateriaSource &operator=(MateriaSource const &source);


// destructor
    ~MateriaSource();



// ********************************* CANONICAL FORM INIT *********************************





// ********************************* OTHER FORM INIT *********************************


// getters




// setters



// methods

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);


// ********************************* OTHER FORM INIT *********************************

};

// operator <<