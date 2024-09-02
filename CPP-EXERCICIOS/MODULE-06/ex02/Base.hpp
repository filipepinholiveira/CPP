#pragma once
#include <iostream>
// #include <cstdlib>  // Para rand()
// #include <ctime>    // Para time()



class Base
{
       public:

        virtual ~Base();

};

Base * generate(void);

void identify(Base* p);

void identify(Base& p);

void readRef(Base& p)

class A;
class B;
class C;