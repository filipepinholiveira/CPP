#pragma once
#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat
{
private:
    /* data */
    const std::string _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string Name, int Grade);
    ~Bureaucrat();

    Bureaucrat (Bureaucrat const &copy);

    Bureaucrat &operator=(Bureaucrat const &source);

    // METHODS

    std::string getName() const;

    int getGrade() const;

    void incrementGrade();

    void decrementGrade();

    void executeForm(AForm const & form);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    void signAForm(AForm &source);
};


std::ostream& operator<<(std::ostream& o, Bureaucrat& value);

