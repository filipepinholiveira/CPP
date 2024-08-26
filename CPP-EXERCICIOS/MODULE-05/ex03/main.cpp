
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

    Bureaucrat Bureau("Bureau", 1);
    Intern Escravo;
    AForm *Form;

    try
    {
        Form = Escravo.makeForm("RobotomyRequest", "Filipe");
        Form->beSigned(Bureau);
        Bureau.executeForm(*Form);

        delete Form;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n##############################################\n";
    std::cout << "##############################################\n";
    std::cout << "##############################################\n";


     try
    {
        Form = Escravo.makeForm("PresidentialPardon", "Filipe");
        Form->beSigned(Bureau);
        Bureau.executeForm(*Form);

        delete Form;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n##############################################\n";
    std::cout << "##############################################\n";
    std::cout << "##############################################\n";

     try
    {
        Form = Escravo.makeForm("ShrubberyCreation", "Filipe");
        Form->beSigned(Bureau);
        Bureau.executeForm(*Form);

        delete Form;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n##############################################\n";
    std::cout << "##############################################\n";
    std::cout << "##############################################\n";

     try
    {
        Form = Escravo.makeForm("Erro!", "Filipe");
        Form->beSigned(Bureau);
        Bureau.executeForm(*Form);

        delete Form;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n##############################################\n";
    std::cout << "##############################################\n";
    std::cout << "##############################################\n";

      try
    {
        Form = Escravo.makeForm("", "Filipe");
        Form->beSigned(Bureau);
        Bureau.executeForm(*Form);

        delete Form;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


	return (0);
}