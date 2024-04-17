
#include "Contact.hpp"

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

    Contact list[8];
    int i = 0;
    int j = 0;
    int x = 0;
    int contactNumber = 0;
    system("clear");
    // std::cout << "*****************" << std::endl;
    // std::cout << "*** MY AGENDA ***" << std::endl;
    printHeader();
    // std::cout << "*" << std::endl;
    // std::cout << "*" << std::endl;
    // std::cout << "* SELECT OPTION:*" << std::endl;
    // std::cout << "* 1 - ADD ()    *" << std::endl;
    // std::cout << "* 2 - SEARCH () *" << std::endl;
    // std::cout << "* 3 - EXIT ()   *" << std::endl;
    // std::cout << "*****************" << std::endl;
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
        // std::cout << "INVALID OPTION*"   << std::endl;
        // std::cout << "*****************" << std::endl;
        // std::cout << "*****************" << std::endl;
        printHeader();
        // std::cout << "* SELECT OPTION:*" << std::endl;
        // std::cout << "* 1 - ADD ()    *" << std::endl;
        // std::cout << "* 2 - SEARCH () *" << std::endl;
        // std::cout << "* 3 - EXIT ()   *" << std::endl;
        // std::cout << "*****************" << std::endl;
        getline(std::cin, choose);
        choice = atoi(choose.c_str());
        if (std::cin.eof())
        {
            std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
            return (0);
        }
    }
    while (choice != 3)
    {
            switch (choice)
            {
            case 1:
                system("clear");
                printHeader();
                getData(NameMain, LastNameMain, NickNameMain, PhoneNumberMain, DarkestSecretMain, choice);
                if (choice == 3)
                {
                    system("clear");
                    std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
                    return (0);
                }
                list[i].setContact(NameMain, LastNameMain, NickNameMain, PhoneNumberMain, DarkestSecretMain);
                NameMain.clear();
                clearData(NameMain, LastNameMain, NickNameMain, PhoneNumberMain, DarkestSecretMain);
                i++;
                if (contactNumber < 8)
                    contactNumber++;
                if (i == 7)
                    i = 0;
                break;
            case 2:
                system("clear");
                //std::cout << "* 2 - SEARCH (X)" << std::endl;
                std::cout << "+------------+------------+------------+------------+" << std::endl;
                std::cout << "|   Index    | First Name | Last  Name |  Nickname  |" << std::endl;
                std::cout << "+------------+------------+------------+------------+" << std::endl;
                while (j < contactNumber)
                {
                    list[j].getContact();
                    j++;
                }
                if (j != 0)
                {
                    do 
                    {
                        std:: cout << "Choose client between 1 and " << j << " to show or press 0 to leave: " << std::endl;
                        do
                        {
                            std::cin >> x;
                            if (x < 0 || x > j)
                            {
                                std::cout << "Invalid choice" << std::endl;
                                std:: cout << "Choose client between 1 and " << j << " to show or press 0 to leave: " << std::endl;
                            }
                        } while (x < 0 || x > j);
                        if (x != 0)
                            list[x - 1].showInfo();
                    } while (x != 0);
                }
                j = 0;
                break;
            default:
                system("clear");
                // std::cout << "INVALID OPTION*"   << std::endl;
                // std::cout << "*****************" << std::endl;
                // std::cout << "*****************" << std::endl;
                // std::cout << "*" << std::endl;
                // std::cout << "*" << std::endl;

            }
            system("clear");
            printHeader();
            // std::cout << "* SELECT OPTION:*" << std::endl;
            // std::cout << "* 1 - ADD ()    *" << std::endl;
            // std::cout << "* 2 - SEARCH () *" << std::endl;
            // std::cout << "* 3 - EXIT ()   *" << std::endl;
            // std::cout << "*****************" << std::endl;
            getline(std::cin, choose);
            if (std::cin.eof())
    {
            std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
            return (0);
    }
            choice = atoi(choose.c_str());
    }
    std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
    return (0);
}