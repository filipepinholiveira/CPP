
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm ("PresidentialPardonForm", 0, 25, 5)
{
    std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm ("PresidentialPardonForm", 0, 25, 5)
{
    _target = target;
    std::cout << "*PresidentialPardonForm parameter constructor*" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Default PresidentialPardonForm destructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm (PresidentialPardonForm const &copy) : AForm()
{
    *this = copy;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &source)
{
    if (this != &source)
    {
        AForm::operator=(source);
        _target = source._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{  
        if(!getIsSigned())
            throw IsNotSigned();
        else if(getSignGrade() < executor.getGrade())
            throw SignGrade();
        else if(getExecuteGrade() < executor.getGrade())
            throw ExecuteGrade();
        std::cout << executor.getName() << " executed " << this->getName() << std::endl;
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}