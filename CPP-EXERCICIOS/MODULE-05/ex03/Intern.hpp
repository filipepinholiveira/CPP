#pragma once
#include <iostream>
#include "AForm.hpp"

class Intern
{
    private:

    public:
        Intern();
        ~Intern();

        Intern (Intern const &copy);

        Intern &operator=(Intern const &source);

    AForm * makeForm(std::string formName, std::string target);

};