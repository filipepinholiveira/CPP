#pragma once
#include <iostream>


class Base
{
public:
    virtual ~Base();

    class BadCast : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);
void readRef(Base& p);
