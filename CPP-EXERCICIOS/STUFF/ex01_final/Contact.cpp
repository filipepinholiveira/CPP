
#include "Phonebook.hpp"

Contact::Contact()
{
    //std::cout << "Phonebook Constructor called" << std::endl;
    return;
}

Contact::~Contact()
{
    //std::cout << "Phonebook Destructor called" << std::endl;
    return;
}

void    Contact::setContact(int &choice)
{
    int flag_isprint;
    int i;
    
    this->_name.clear();
    this->_lastName.clear();
    this->_nickName.clear();
    this->_phoneNumber.clear();
    this->_darkestSecret.clear();
    
    while(this->_name.empty() || !flag_isprint)
    {   
        i = 0;
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Name: ";
        getline(std::cin, _name);
        flag_isprint = 1;
        while (_name[i])
        {
            if (isprint(_name[i]) == 0)
            {
                flag_isprint = 0;
            }
            i++;
        }   
    }
    while(this->_lastName.empty() || !flag_isprint)
    {
        i = 0;
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Last Name: ";
        getline(std::cin, _lastName);
        flag_isprint = 1;
        while (_lastName[i])
        {
            if (isprint(_lastName[i]) == 0)
            {
                flag_isprint = 0;
            }
            i++;
        }   
    }
    while (this->_nickName.empty() || !flag_isprint)
    {
        i = 0;
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Nick Name: ";
        getline(std::cin, _nickName);
        flag_isprint = 1;
        while (_nickName[i])
        {
            if (isprint(_nickName[i]) == 0)
            {
                flag_isprint = 0;
            }
            i++;
        }   
    }
    while (this->_phoneNumber.empty() || !flag_isprint)
    {
        i = 0;
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Phone number: ";
        getline(std::cin, _phoneNumber);
        flag_isprint = 1;
        while (_phoneNumber[i])
        {
            if (isprint(_phoneNumber[i]) == 0)
            {
                flag_isprint = 0;
            }
            i++;
        }   
    }
    while (this->_darkestSecret.empty() || !flag_isprint)
    {
        i = 0;
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Darkest Secret: ";
        getline(std::cin, _darkestSecret);
        flag_isprint = 1;
        while (_darkestSecret[i])
        {
            if (isprint(_darkestSecret[i]) == 0)
            {
                flag_isprint = 0;
            }
            i++;
        }   
    }
    return ;
}

void    Contact::getContact(int index)
{
    //std::cout << "| " << std::setw(10) << std::right << i + 1;
    std::string showName = _name;
    if (showName.length() > 9)
    {
        showName.resize(9);
        showName = showName + '.';
    }
    std::string showLastName = _lastName;
    if (showLastName.length() > 9)
    {
        showLastName.resize(9);
        showLastName = showLastName + '.';
    }
    std::string showNickName = _nickName;
    if (showNickName.length() > 9)
    {
        showNickName.resize(9);
        showNickName = showNickName + '.';
    }
    std::string showPhoneNumber = _phoneNumber;
    if (showPhoneNumber.length() > 9)
    {
        showPhoneNumber.resize(9);
        showPhoneNumber = showPhoneNumber + '.';
    }

    std:: cout << "| " << std::setw(10) << std::right << index + 1 << " | " << std::setw(10) << std::right << showName << " | " << std::setw(10) << std::right << showLastName << " | " << std::setw(10) << std::right << showNickName << " | " << std::endl;
}

void    Contact::showInfo()
{
    std::string back;


    system ("clear");
    std::cout << std::endl;
    std::cout << "INFO:  " << std::endl;
    std::cout << std::endl;
    std::cout << "Name: " << _name << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nick Name: " << _nickName << std::endl;
    std::cout << "Phone number: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
    std::cout << std::endl;
    do
    {
        std::cout << "Digit RETURN to return to the list > ";
        if (std::cin.eof())
        {
            std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
            return;
        }
        getline(std::cin, back);
    } while (back != "RETURN");

}
