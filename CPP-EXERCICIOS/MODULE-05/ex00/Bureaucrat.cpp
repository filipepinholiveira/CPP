
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
            throw GradeTooHighException();
        if (Grade > 150)
            throw GradeTooLowException();
        return ;
    }
    else
        _grade = Grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called" << std::endl;
}


Bureaucrat::Bureaucrat (Bureaucrat const &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
    
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &source)
{
    if (this != &source)
    {
        // this->_name 'e const, passei o direto no copy constructor
        this->_grade = source.getGrade();
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
        throw GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::decrementGrade()
{
    std::cout << "Entered decrement" << std::endl;
    if (this->_grade + 1 > 150)
        throw GradeTooLowException();
    else
        _grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
        return "Grade increase will be above 1 (range is set between 1-150)\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
        return "Grade increase will be under 150 (range is set between 1-150)\n";
}


std::ostream& operator<<(std::ostream& o, Bureaucrat& value)
{
	o << value.getName() << ", bureaucrat grade " << value.getGrade();
	return o;
}

