#pragma once
#include <iostream>
#include <exception>


class Bureaucrat;

class Form
{
private:
    /* data */
    const std::string   _name;
    bool                _isSign;
    const int           _signGrade;
    const int           _executeGrade;

public:
    Form();
    ~Form();
    
    Form (Form const &copy);
    Form &operator=(Form const &source);

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

    void beSigned(Bureaucrat &source);

};


