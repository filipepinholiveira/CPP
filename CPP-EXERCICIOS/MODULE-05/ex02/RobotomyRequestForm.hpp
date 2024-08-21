#pragma once
#include <iostream>
#include "AForm.hpp"
#include <cstdlib> // para usar srand

class RobotomyRequestForm : public AForm
{
    private:

        std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();

        RobotomyRequestForm (RobotomyRequestForm const &copy);

        RobotomyRequestForm &operator=(RobotomyRequestForm const &source);

        void execute(Bureaucrat const & executor) const;

};

