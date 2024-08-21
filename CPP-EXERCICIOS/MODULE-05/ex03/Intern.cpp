#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Default destructor called" << std::endl;

}

Intern::Intern (Intern const &copy)
{
    *this = copy;
}
Intern &Intern::operator=(Intern const &source)
{
    if (this != &source)
    {
        //copy definition
    }
    return *this;
}

AForm * makeForm(std::string formName, std::string target);
{
    
}
