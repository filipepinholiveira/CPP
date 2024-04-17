
#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"
#include "auxiliares.hpp"

class Contact
{

private:

    std::string _name;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;

public:

    Contact ();
    ~Contact ();

    void    setContact(std::string name, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
    
    void    getContact();

    void    showInfo();

};


#endif