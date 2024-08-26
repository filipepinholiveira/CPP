#pragma once
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
    private:

    public:
        Intern();
        ~Intern();

        Intern (Intern const &copy);

        Intern &operator=(Intern const &source);

    AForm * makeForm(std::string formName, std::string target);
    AForm * createShrubberyCreationForm(std::string target);
    AForm * createRobotomyRequestForm(std::string target);
    AForm * createPresidentialPardonForm(std::string target);

    class NoValidForm : public std::exception
    {
    
    public:
        virtual const char* what() const throw();
    };
};