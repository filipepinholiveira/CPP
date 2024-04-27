

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <iomanip>
#include "Contact.hpp"
#include "auxiliares.hpp"
# include <cctype>

class Phonebook
{

private: 

    Contact List[8];

public:

    Phonebook ();
    ~Phonebook ();

    Contact* getList();

};


#endif