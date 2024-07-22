
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
            std::cout << "Grade is above 1 (range is set between 1-150)" << std::endl;
        if (Grade > 150)
            std::cout << "Grade is under 150 (range is set between 1-150)" << std::endl;
        return ;
    }
    else
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

// METHODS

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    std::cout << "Entered increment" << std::endl;
    if (this->_grade - 1 < 1)
        std::cout << "Grade increase will be above 1 (range is set between 1-150)" << std::endl;
    else
        _grade--;
}

void Bureaucrat::decrementGrade()
{
    std::cout << "Entered decrement" << std::endl;
    if (this->_grade + 1 > 150)
        std::cout << "Grade decrement will be under 150 (range is set between 1-150)" << std::endl;
    else
        _grade++;
}




