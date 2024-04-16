
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "auxiliares.hpp"

void    getData(std::string name, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
    std::cout << "Name: " << std::endl;
    std::cin >> name;
    std::cout << "Last Name: " << std::endl;
    std::cin >> lastName;
    std::cout << "Nick Name: " << std::endl;
    std::cin >> nickName;
    std::cout << "Phone number: " << std::endl;
    std::cin >> phoneNumber;
    std::cout << "Darkest Secret: " << std::endl;
    std::cin >> darkestSecret;
    return;
}