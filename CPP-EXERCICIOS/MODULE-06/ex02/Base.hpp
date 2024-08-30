#pragma once
#include <iostream>
#include <cstdlib>  // Para rand()
#include <ctime>    // Para time()

class Base
{
    private:

        

       public:

        virtual ~Base();

};

Base * generate(void);

void identify(Base* p);