
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

void    Contact::getContact(int index)
{
    //std::cout << "| " << std::setw(10) << std::right << i + 1;
    std::string showName = _name;
    if (showName.length() > 9)
        showName.resize(9);
    std::string showLastName = _lastName;
    if (showLastName.length() > 9)
        showLastName.resize(9);
    std::string showNickName = _nickName;
    if (showNickName.length() > 9)
        showNickName.resize(9);
    std::string showPhoneNumber = _phoneNumber;
    if (showPhoneNumber.length() > 9)
        showPhoneNumber.resize(9);

    std:: cout << "| " << std::setw(10) << std::right << index + 1 << " | " << std::setw(10) << std::right << showName << " | " << std::setw(10) << std::right << showLastName << " | " << std::setw(10) << std::right << showNickName << " | " << std::endl;
}

void    Contact::showInfo()
{
    std::cout << std::endl;
    std::cout << "INFO:  " << std::endl;
    std::cout << std::endl;
    std::cout << "Name: " << _name << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nick Name: " << _nickName << std::endl;
    std::cout << "Phone number: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
    std::cout << std::endl;
}

