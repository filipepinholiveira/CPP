
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    //std::cout << "Phonebook Constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook()
{
    //std::cout << "Phonebook Destructor called" << std::endl;
    return;
}

void    PhoneBook::setContact(int &choice)
{
    while(this->_name.empty())
    {   
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Name: " << std::endl;
        getline(std::cin, _name);
    }
    while(this->_lastName.empty())
    {
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Last Name: " << std::endl;
        getline(std::cin, _lastName);
    }
    while (this->_nickName.empty())
    {
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Nick Name: " << std::endl;
        getline(std::cin, _nickName);
    }
    while (this->_phoneNumber.empty())
    {
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Phone number: " << std::endl;
        getline(std::cin, _phoneNumber);
    }
    while (this->_darkestSecret.empty())
    {
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Darkest Secret: " << std::endl;
        getline(std::cin, _darkestSecret);
    }
    return ;
}

void    PhoneBook::getContact(int index)
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
