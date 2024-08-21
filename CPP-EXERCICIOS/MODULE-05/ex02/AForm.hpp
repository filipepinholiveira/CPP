#pragma once
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
private:
    /* data */
    const std::string   _name;
    bool                _isSign;
    const int           _signGrade;
    const int           _executeGrade;

public:
    AForm();
    AForm(const std::string name, bool isSign, const int signGrade, const int executeGrade);
    virtual ~AForm(); // nao esquecer que tem que ser virtual ja que e uma abstrate class e vai ser chamada pelos destrutores das classes filho
    
    AForm (AForm const &copy);
    AForm &operator=(AForm const &source);

    // getters
    std::string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;


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

    class IsNotSigned : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class SignGrade : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class ExecuteGrade : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    void beSigned(Bureaucrat &source);

    virtual void execute(Bureaucrat const & executor) const = 0;

};

#include "Bureaucrat.hpp"

