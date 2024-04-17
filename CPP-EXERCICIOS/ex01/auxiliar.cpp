
#include "Contact.hpp"



// resolver -> funcao tem q alterar 
void    getData(std::string &name, std::string &lastName, std::string &nickName, std::string &phoneNumber, std::string &darkestSecret, int &choice)
{
    while(name.empty())
    {   
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Name: " << std::endl;
        getline(std::cin, name);
    }
    while(lastName.empty())
    {
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Last Name: " << std::endl;
        getline(std::cin, lastName);
    }
    while (nickName.empty())
    {
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Nick Name: " << std::endl;
        getline(std::cin, nickName);
    }
    while (phoneNumber.empty())
    {
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Phone number: " << std::endl;
        getline(std::cin, phoneNumber);
    }
    while (darkestSecret.empty())
    {
        if (std::cin.eof())
        {
            choice = 3;
            break;
        }
        std::cout << "Darkest Secret: " << std::endl;
        getline(std::cin, darkestSecret);
    }
    return ;
}

void    clearData (std::string &name, std::string &lastName, std::string &nickName, std::string &phoneNumber, std::string &darkestSecret)
{
    name.clear();
    lastName.clear();
    nickName.clear();
    phoneNumber.clear();
    darkestSecret.clear();
    return;
}

void    printHeader()
{
    std::cout << " ***************************************************" << std::endl; 
    std::cout << "                                                    " << std::endl;
    std::cout << "   *******  *****  *****  *    *  **     *******    " << std::endl;
    std::cout << "   *     *  *      *      * *  *  *  *   *     *    " << std::endl;
    std::cout << "   *******  *  **  ***    *  * *  *   *  *******    " << std::endl;
    std::cout << "   *     *  *   *  *      *   **  *   *  *     *    " << std::endl;
    std::cout << "   *     *  *****  *****  *    *  ****   *     *    " << std::endl;
    std::cout << "                                                    " << std::endl;
    std::cout << " ***************************************************" << std::endl;
    std::cout << "* SELECT OPTION:                                   *" << std::endl;
    std::cout << "* 1 - ADD ()       2 - SEARCH ()      3 - EXIT ()  *" << std::endl;
    std::cout << "****************************************************" << std::endl;
}