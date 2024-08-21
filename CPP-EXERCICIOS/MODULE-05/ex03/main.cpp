
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

    Bureaucrat michel("michel", 150);
    ShrubberyCreationForm michelS("Home");
	RobotomyRequestForm michelR("Morty");
	PresidentialPardonForm michelP("Rick Sanchez");

    std::cout << " \n\n----- MICHEL: no signed done for all Forms -----\n\n";

    michel.executeForm(michelP);
    michel.executeForm(michelR);
    michel.executeForm(michelS);

	Bureaucrat mike("Mike", 150);
    ShrubberyCreationForm mikeS("Home");
    RobotomyRequestForm mikeR("Morty");
	PresidentialPardonForm mikeP("Rick Sanchez");

    std::cout << " \n\n----- MIKE: Sign grade invalid for all Forms -----\n\n";

    mikeP.beSigned(mike);
    mikeR.beSigned(mike);
    mikeS.beSigned(mike);
    mike.executeForm(mikeP);
    mike.executeForm(mikeR);
    mike.executeForm(michelS);

	Bureaucrat jon("Jon", 60);
    ShrubberyCreationForm jonS("Home");
	RobotomyRequestForm jonR("Morty");
	PresidentialPardonForm jonP("Rick Sanchez");

    std::cout << " \n\n----- JON: Sign grade invalid for Presidential and invalid exec grade for Robo -----\n\n";

    jonP.beSigned(mike);
    jonR.beSigned(mike);
    jonS.beSigned(jon);
    jon.executeForm(jonP);
    jon.executeForm(jonR);
    jon.executeForm(jonS);

    Bureaucrat phil("phil", 10);
    ShrubberyCreationForm philS("Home");
	RobotomyRequestForm philR("Morty");
	PresidentialPardonForm philP("Rick Sanchez");

    std::cout << " \n\n----- PHIL: invalid exec grade for Presidential -----\n\n";

    philP.beSigned(phil);
    philR.beSigned(phil);
    philS.beSigned(phil);
    phil.executeForm(philP);
    phil.executeForm(philR);
    phil.executeForm(philS);

    Bureaucrat bill("bill", 140);
    ShrubberyCreationForm billS("Home");
	RobotomyRequestForm billR("Morty");
	PresidentialPardonForm billP("Rick Sanchez");

    std::cout << " \n\n----- BILL: Sign grade invalid for Robo and Presidencial and invalid exec grade for Shrub -----\n\n";


    billP.beSigned(bill);
    billR.beSigned(bill);
    billS.beSigned(bill);
    bill.executeForm(billP);
    bill.executeForm(billR);
    bill.executeForm(billS);

	Bureaucrat steve("Steve", 3);
    ShrubberyCreationForm steveS("Home");
	RobotomyRequestForm steveR("Morty");
	PresidentialPardonForm steveP("Rick Sanchez");

    std::cout << " \n\n----- STEVE: Valid grades and execute grades -----\n\n";

    steveP.beSigned(steve);
    steveR.beSigned(steve);
    steveS.beSigned(steve);
    steve.executeForm(steveP);
    steve.executeForm(steveR);
    steve.executeForm(steveS);
	return (0);
}