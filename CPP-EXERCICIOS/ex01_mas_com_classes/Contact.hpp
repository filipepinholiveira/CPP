
#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <iomanip>
#include "PhoneBook.hpp"
#include "auxiliares.hpp"
# include <cctype>

class Contact
{

private: 

    PhoneBook List[8];

public:

    Contact ();
    ~Contact ();

    PhoneBook* getList();

};


#endif