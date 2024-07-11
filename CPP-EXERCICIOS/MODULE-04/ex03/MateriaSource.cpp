#include "MateriaSource.hpp"





// ********************************* CANONICAL FORM INIT *********************************

// default constructor
MateriaSource::MateriaSource(/* args */)
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        LearnBook[i] = NULL;
    }
}


// copy constructor




// operator =




// destructor
MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource default destructor called" << std::endl;
}

// ********************************* CANONICAL FORM INIT *********************************





// ********************************* OTHER FORM INIT *********************************


// getters




// setters



// methods

void MateriaSource::learnMateria(AMateria* Materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (LearnBook[i] = NULL)
            LearnBook[i] = Materia;
    }
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    
}


// operator <<



// ********************************* OTHER FORM INIT *********************************