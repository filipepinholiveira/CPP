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
    ~AForm();
    
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

    void beSigned(Bureaucrat &source);

    void execute(Bureaucrat const & executor) const;

};


