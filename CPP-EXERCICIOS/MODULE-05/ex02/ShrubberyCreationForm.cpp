
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm ("ShrubberyCreationForm", 0, 145, 137)
{
    // std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
    _target = "No target set";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 0, 145, 137)
{
    _target = target;
    // std::cout << "*ShrubberyCreationForm parameter constructor*" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "Default ShrubberyCreationForm destructor called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm (ShrubberyCreationForm const &copy) :AForm()
{
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &source)
{
    if (this != &source)
    {
        AForm::operator=(source);
        _target = source._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
    // falta codigo de execucao ShrubberyCreationForm
}
