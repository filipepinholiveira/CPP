
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
/* Create the 3 forms and some Bureaucrats */

    srand ((unsigned) time(NULL));
    /*
        para garantir que rand varia na execucao de Robotomy
    */

	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm robotomy("Morty");
	PresidentialPardonForm pardon("Rick Sanchez");
	Bureaucrat mike("Mike", 150);
	Bureaucrat jon("Jon", 70);
	Bureaucrat steve("Steve", 3);

        robotomy.beSigned(mike);
        robotomy.beSigned(jon);
        robotomy.beSigned(steve);
        mike.executeForm(robotomy);
        jon.executeForm(robotomy);
        steve.executeForm(robotomy);
    
	return (0);
}