
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
    //std::cout << "Set called" << std::endl;
    _name = name;
    _lastName = lastName;
    _nickName = nickName;
    _phoneNumber = phoneNumber;
    _darkestSecret = darkestSecret;
}

void    Contact::getContact()
{
    //std::cout << "| " << std::setw(10) << std::right << i + 1;

    std:: cout << "| " << std::setw(10) << std::right << _name << " | " << std::setw(10) << std::right << _lastName << " | " << std::setw(10) << std::right << _nickName << " | " << std::setw(10) << std::right << _phoneNumber << " | " << std::endl;
}

void    Contact::showInfo()
{
    std::cout << "Name: " << _name << std::endl;
    std::cout << "Last ame: " << _lastName << std::endl;
    std::cout << "Nick Name: " << _nickName << std::endl;
    std::cout << "Phone number: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;

}

