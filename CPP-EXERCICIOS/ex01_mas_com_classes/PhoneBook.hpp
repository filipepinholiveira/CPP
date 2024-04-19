
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"


class PhoneBook
{

private:

    std::string _name;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;


public:

    PhoneBook ();
    ~PhoneBook ();

    void    setContact(int &choice);
    
    void    getContact(int index);

};


#endif