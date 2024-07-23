#include "Form.hpp"



Form::Form() : _name("No name set"), _isSign(0), _signGrade(10), _executeGrade(2)
{
    std::cout << "Default Form constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Default Form destructor called" << std::endl;
}