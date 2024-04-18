
#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <iomanip>
#include "PhoneBook.hpp"
#include "auxiliares.hpp"

class Contact
{

private: 

    PhoneBook List[8];

public:


    void    setContact(PhoneBook List, int &choice);

    Contact ();
    ~Contact ();

};


#endif