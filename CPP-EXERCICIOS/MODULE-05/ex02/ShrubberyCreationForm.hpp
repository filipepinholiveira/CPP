
#pragma once
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:

       std::string _target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm (ShrubberyCreationForm const &copy);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &source);

        



};