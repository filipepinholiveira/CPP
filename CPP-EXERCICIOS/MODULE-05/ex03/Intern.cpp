#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Default Intern destructor called" << std::endl;

}

Intern::Intern (Intern const &copy)
{
    *this = copy;
}
Intern &Intern::operator=(Intern const &source)
{
    if (this != &source)
    {
        *this = source;
    }
    return *this;
}

AForm * Intern::makeForm(std::string formName, std::string target)
{
    AForm *formCreated = NULL;
    int choice = 10;
    std::string formNames[] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};

    if (!formName.empty())
    {
        for (int i = 0; i < 3; i++) {
            if (formName == formNames[i]) {
                choice = i;
                break; 
            }
        }

        switch (choice)
        {
        case 0:
            formCreated = createShrubberyCreationForm(target);
            break;
        case 1:
            formCreated = createRobotomyRequestForm(target);
            break;
        case 2:
            formCreated = createPresidentialPardonForm(target);
            break;

        
        default:

            if (choice == 10)
                throw NoValidForm();
        }
    }
    else
    {
                throw NoValidForm();
    }
        

    
    std::cout << "Intern creates " << formName << std::endl;

    return formCreated;
}


    AForm * Intern::createShrubberyCreationForm(std::string target)
    {
        return new ShrubberyCreationForm(target);
    }

    AForm * Intern::createRobotomyRequestForm(std::string target)
    {
        return new RobotomyRequestForm(target);
    }

    AForm * Intern::createPresidentialPardonForm(std::string target)
    {
        return new PresidentialPardonForm(target);
    }

    const char *    Intern::NoValidForm::what() const throw()
    {
        return "Not valid form\n";
    }



