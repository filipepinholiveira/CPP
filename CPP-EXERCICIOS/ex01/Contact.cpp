
#include "Contact.hpp"

Contact::Contact ()
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Contact::~Contact()
{
    //std::cout << "Destructor called" << std::endl;
    return;
}


void    Contact::setContact(std::string name, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
    std::cout << "Set called" << std::endl;
    _name = name;
    _lastName = lastName;
    _nickName = nickName;
    _phoneNumber = phoneNumber;
    _darkestSecret = darkestSecret;
}

void    Contact::GetContact()
{
    std:: cout << " | " << _name << " | " << _lastName << " | " << _nickName << " | " << _phoneNumber << " | " << std::endl;
}

