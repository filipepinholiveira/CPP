#include "Bureaucrat.hpp"



Form::Form() : _name("Form default name"), _isSign(0), _signGrade(10), _executeGrade(1)
{
    std::cout << "Default Form constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Default Form destructor called" << std::endl;
}


Form::Form (Form const &copy) : _name(copy._name), _isSign(copy._isSign), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
    std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(Form const &source)
{
    std::cout << "Assign operator called" << std::endl;
    if(this != &source)
    {
        *this = source;
    }
    return *this;
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getIsSigned() const
{
    if(_isSign == 0)
        return false;
    return true;
}

int Form::getSignGrade() const
{
    return this->_signGrade;
}

int Form::getExecuteGrade() const
{
    return this->_executeGrade;
}

const char* Form::GradeTooHighException::what() const throw()
{
        return "Grade increase will be above 1 (range is set between 1-150)\n";
}

const char* Form::GradeTooLowException::what() const throw()
{
        return "Grade increase will be under 150 (range is set between 1-150)\n";
}

void Form::beSigned(Bureaucrat &source)
{
    if (source.getGrade() <= this->getSignGrade()) 
        this->_isSign = 1;
    else
        throw Form::GradeTooLowException();
}
















