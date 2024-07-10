#include "Brain.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// default constructor

Brain::Brain(/* args */)
{
    std::cout << "Default Brain constructor called" << std::endl;
}

// operator =
Brain &Brain::operator=(Brain const &source)
{
    if (this != &source)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = source.ideas[i];
        }
    }
    return *this;
}

// copy constructor
Brain::Brain (Brain const &copy)
{
    *this = copy;
}

// destructor

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

// ********************************* CANONICAL FORM INIT *********************************



// ********************************* OTHER FORM INIT *********************************

// getters

std::string Brain::get_ideas(int i) const
{
    return this->ideas[i];
}



// setters

void    Brain::set_ideas(int max, const char **array)
{
    int i = 0;
    while (i < max)
    {
        ideas[i] = array[i];
        i++;
    }
}

// methods


// ********************************* OTHER FORM INIT *********************************

