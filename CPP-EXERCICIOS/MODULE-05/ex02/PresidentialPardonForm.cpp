
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm ("PresidentialPardonForm", 0, 25, 5)
{
    // std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm ("PresidentialPardonForm", 0, 25, 5)
{
    _target = target;
    // std::cout << "*PresidentialPardonForm parameter constructor*" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "Default PresidentialPardonForm destructor called" << std::endl;

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
    (void) executor;
    // falta codigo de execucao PresidentialPardonForm
}