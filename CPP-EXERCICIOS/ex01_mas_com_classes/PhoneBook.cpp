
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

