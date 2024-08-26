#include "Bureaucrat.hpp"



AForm::AForm() : _name("AForm default name"), _isSign(0), _signGrade(10), _executeGrade(1)
{
    std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(const std::string name, bool isSign, const int signGrade, const int executeGrade) : _name(name), _isSign(isSign), _signGrade(signGrade), _executeGrade(executeGrade)
{
    std::cout << "AForm constructor with args called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Default AForm destructor called" << std::endl;
}


AForm::AForm (AForm const &copy) : _name(copy._name), _isSign(copy._isSign), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(AForm const &source)
{
    std::cout << "Assign operator called" << std::endl;
    if(this != &source)
    {
        *this = source;
    }
    return *this;
}

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getIsSigned() const
{
    if(_isSign == 0)
        return false;
    return true;
}

int AForm::getSignGrade() const
{
    return this->_signGrade;
}

int AForm::getExecuteGrade() const
{
    return this->_executeGrade;
}

const char* AForm::GradeTooHighException::what() const throw()
{
        return "Grade increase will be above 1 (range is set between 1-150)\n";
}

const char* AForm::GradeTooLowException::what() const throw()
{
        return "Grade increase will be under 150 (range is set between 1-150)\n";
}

const char* AForm::IsNotSigned::what() const throw()
{
        return "Not Signed";
}

const char* AForm::SignGrade::what() const throw()
{
        return "Sign Grade invalid";
}

const char* AForm::ExecuteGrade::what() const throw()
{
        return "Execute Grade invalid";
}



void AForm::beSigned(Bureaucrat &source)
{
    if (source.getGrade() <= this->getSignGrade()) 
        this->_isSign = 1;
    // else
    //     throw GradeTooLowException();
}

bool AForm::getSigned() const
{
    return _isSign;
}

int AForm::getGradeToSign() const
{
    return _signGrade;
}

int AForm::getGradeToExecute() const
{
    return _executeGrade;
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "Form " << form.getName() << " is ";
    if (form.getSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << form.getGradeToSign() << " to sign and grade " << form.getGradeToExecute() << " to execute" << std::endl;
    return out;
}
















