
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
    std::string chooseContact;
    int contactNumber = 0;
    system("clear");
    printHeader();
    std::cout << "* SELECT OPTION: ";
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
        std::cout << "* SELECT OPTION: ";
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
                std::cout << "+------------+------------+------------+------------+" << std::endl;
                std::cout << "|   Index    | First Name | Last  Name |  Nickname  |" << std::endl;
                std::cout << "+------------+------------+------------+------------+" << std::endl;
                while (j < contactNumber)
                {
                    list[j].getContact(j);
                    j++;
                }
                std::cout << "+------------+------------+------------+------------+" << std::endl;
                if (j != 0)
                {
                    // do 
                    // {
                    //     std:: cout << "Choose client between 1 and " << j << " to show or press 0 to leave: " << std::endl;
                    //     do
                    //     {
                    //         std::cin >> x;
                    //         if (x < 0 || x > j)
                    //         {
                    //             std::cout << "Invalid choice" << std::endl;
                    //             std:: cout << "Choose client between 1 and " << j << " to show or press 0 to leave: " << std::endl;
                    //         }
                    //     } while (x < 0 || x > j);
                    //     if (x != 0)
                    //         list[x - 1].showInfo();
                    // } while (x != 0);

                    do 
                    {
                        std:: cout << std::endl;
                        std:: cout << "Choose client between 1 and " << j << " to show INFO or EXIT to leave: " << std::endl;
                        do
                        {
                            if (std::cin.eof())
                            {
                                std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
                                return (0);
                            }
                            getline(std::cin, chooseContact);
                            x = atoi(chooseContact.c_str());
                            if ((x < 1 || x > j) && chooseContact != "EXIT" && !(std::cin.eof()))
                            {
                                std::cout << "Invalid choice" << std::endl;
                                std:: cout << "Choose client between 1 and " << j << " to show INFO or EXIT to leave: " << std::endl;
                            }
                        } while ((x < 1 || x > j) && chooseContact != "EXIT");
                        if (x != 0)
                            list[x - 1].showInfo();
                    } while (chooseContact != "EXIT");

                }
                j = 0;
                break;
            default:
                system("clear");
                std::cout << "X = " << x << std::endl;
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
    std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
    return (0);
}