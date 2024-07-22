#pragma once
#include <iostream>

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
};


