
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{

    srand ((unsigned) time(NULL));

    Bureaucrat michel("michel", 1);
    Intern Escravo;
    AForm *Form;

    try
    {
        Form = Escravo.makeForm("RobotomyRequest", "Filipe");
        Form->beSigned(michel);
        michel.executeForm(*Form);

        delete Form;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


	return (0);
}