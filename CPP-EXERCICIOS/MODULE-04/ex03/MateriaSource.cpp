#include "MateriaSource.hpp"
#include "AMateria.hpp"





// ********************************* CANONICAL FORM INIT *********************************

// default constructor
MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        LearnBook[i] = NULL;
    }
}


// copy constructor

MateriaSource::MateriaSource (MateriaSource const &copy)
{
    *this = copy;
}



// operator =

MateriaSource &MateriaSource::operator=(MateriaSource const &source)
{
    if (this != &source)
    {
        for (int i = 0; i < 4; i++)
        {
            this->LearnBook[i] = source.LearnBook[i];
        }
    }
    return *this;
}



// destructor
MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource default destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete LearnBook[i];
    }
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
        if (LearnBook[i] == NULL)
            {
                LearnBook[i] = Materia;
                std::cout << "MateriaSource learned " << Materia->getType() << std::endl;
			    return ;
            }
    }
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (LearnBook[i] && LearnBook[i]->getType() == type)
		{
			std::cout << type << " created" << std::endl;
			return LearnBook[i]->clone();
		}
    }
    return NULL;
}


// operator <<



// ********************************* OTHER FORM INIT *********************************