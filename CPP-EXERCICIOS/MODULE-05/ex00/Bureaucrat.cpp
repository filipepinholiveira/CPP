
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("No name set"), _grade(150)
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : _name(Name)
{
    std::cout << "Constructor with args called" << std::endl;
    if (Grade < 1 || Grade > 150)
    {
        if (Grade < 1)
        {}
            std::cout << "Too Low value" << std::endl;
        if (Grade > 150)
            std::cout << "TOO High value" << std::endl;
        return ;
    }
    _grade = Grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called" << std::endl;
}


Bureaucrat::Bureaucrat (Bureaucrat const &copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &source)
{
    if (this != &source)
    {
        // fazer as alteraçoes
    }
    return *this;
}

