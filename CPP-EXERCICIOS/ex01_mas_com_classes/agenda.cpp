
#include "Contact.hpp"

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    int i = 0;
    std::string choose; // ARGUMENTO QUE VAI RECEBER A ESCOLHA (1, 2 OU 3)
    int choice; // ARGUMENTO QUE VAI RECEBER 1, 2 OU 3 ATRAVES DE ATOI(CHOOSE)
    system("clear");
    printHeader();
    std::cout << "* SELECT OPTION: > ";
    Contact Contacts;

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
        printHeader();
        std::cout << "* SELECT OPTION: > ";
        getline(std::cin, choose);
        choice = atoi(choose.c_str());
        if (std::cin.eof())
        {
            std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
            return (0);
        }
    }
    while(choice != 3)
    {
        int contactNumber = 0;
        switch (choice)
        {
            case 1:
                system("clear");
                printHeader();
                Contacts.List[i].setContact(choice);
                i++;
                if (contactNumber < 8)
                    contactNumber++;
                if (i == 7)
                    i = 0;
                break;
            case 2:
                system("clear");
                std::cout << "+------------+------------+------------+------------+" << std::endl;
                std::cout << "|   Index    | First Name | Last  Name |  Nickname  |" << std::endl;
                std::cout << "+------------+------------+------------+------------+" << std::endl;
            break;
        default:
            system("clear");
        }
        system("clear");
            printHeader();
            std::cout << "* SELECT OPTION: ";
            getline(std::cin, choose);
            if (std::cin.eof())
        {
                std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
                return (0);
        }
            choice = atoi(choose.c_str());
    }
    
}