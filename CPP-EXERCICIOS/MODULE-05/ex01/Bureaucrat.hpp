#pragma once
#include <iostream>
#include <exception>
#include "Form.hpp"

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

    void signForm(Form &source);
};


std::ostream& operator<<(std::ostream& o, Bureaucrat& value);

