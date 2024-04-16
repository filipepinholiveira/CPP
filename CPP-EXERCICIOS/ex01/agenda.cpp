
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "auxiliares.hpp"

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    std::string NameMain;
    std::string LastNameMain;
    std::string NickNameMain;
    std::string PhoneNumberMain;
    std::string DarkestSecretMain;
    
    std::string choose;
    int choice;

    Contact list[7];
    int i = 0;
    system("clear");
    std::cout << "*****************" << std::endl;
    std::cout << "*** MY AGENDA ***" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "* SELECT OPTION:*" << std::endl;
    std::cout << "* 1 - ADD ()    *" << std::endl;
    std::cout << "* 2 - SEARCH () *" << std::endl;
    std::cout << "* 3 - EXIT ()   *" << std::endl;
    std::cout << "*****************" << std::endl;
    getline(std::cin, choose);
    if (choose.empty())
    {
        std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
        return (0);
    }

    choice = atoi(choose.c_str());
    while (!choice)
    {
        system("clear");
        std::cout << "INVALID OPTION*"   << std::endl;
        std::cout << "*****************" << std::endl;
        std::cout << "*****************" << std::endl;
        std::cout << "* SELECT OPTION:*" << std::endl;
        std::cout << "* 1 - ADD ()    *" << std::endl;
        std::cout << "* 2 - SEARCH () *" << std::endl;
        std::cout << "* 3 - EXIT ()   *" << std::endl;
        std::cout << "*****************" << std::endl;
        getline(std::cin, choose);
        choice = atoi(choose.c_str());
    }
    while (choice != 3)
    {
            switch (choice)
            {
            case 1:
                system("clear");
                std::cout << "* 1 - ADD (X)" << std::endl;
                getData(NameMain, LastNameMain, NickNameMain, PhoneNumberMain, DarkestSecretMain);
                list[i].setContact(NameMain, LastNameMain, NickNameMain, PhoneNumberMain, DarkestSecretMain);
                std::cout << "*" << std::endl;
                std::cout << "*" << std::endl;
                break;
            case 2:
                system("clear");
                std::cout << "* 2 - SEARCH (X)" << std::endl;
                std::cout << "Contact info" << std::endl;
                std::cout << "*" << std::endl;
                std::cout << "*" << std::endl;
                break;
            default:
                system("clear");
                std::cout << "INVALID OPTION*"   << std::endl;
                std::cout << "*****************" << std::endl;
                std::cout << "*****************" << std::endl;
                std::cout << "*" << std::endl;
                std::cout << "*" << std::endl;

            }
            std::cout << "* SELECT OPTION:*" << std::endl;
            std::cout << "* 1 - ADD ()    *" << std::endl;
            std::cout << "* 2 - SEARCH () *" << std::endl;
            std::cout << "* 3 - EXIT ()   *" << std::endl;
            std::cout << "*****************" << std::endl;
            getline(std::cin, choose);
            choice = atoi(choose.c_str());
    }
    std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
    return (0);
}