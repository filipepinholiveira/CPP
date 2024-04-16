
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "auxiliares.hpp"


// resolver -> funcao tem q alterar 
void    getData(std::string name, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
    std::cout << "Name: " << std::endl;
    getline(std::cin, name); //std::cin >> name; 
    std::cout << "Last Name: " << std::endl;
    getline(std::cin, lastName); //std::cin >> lastName;
    std::cout << "Nick Name: " << std::endl;
    getline(std::cin, nickName); //std::cin >> nickName;
    std::cout << "Phone number: " << std::endl;
    getline(std::cin, phoneNumber); //std::cin >> phoneNumber;
    std::cout << "Darkest Secret: " << std::endl;
    getline(std::cin, darkestSecret); //std::cin >> darkestSecret;
}