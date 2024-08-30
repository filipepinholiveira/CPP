#pragma once
#include <iostream>
#include <cstdlib>  // Para rand()
#include <ctime>    // Para time()
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Base
{
    private:

        Base();

       public:

        ~Base();

};

Base * generate(void);