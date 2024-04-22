
#include "Contact.hpp"

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    int i = 0;
    int j = 0;
    int x = 0;
    std::string chooseContact; 
    std::string choose; // ARGUMENTO QUE VAI RECEBER A ESCOLHA (1, 2 OU 3)
    int choice; // ARGUMENTO QUE VAI RECEBER 1, 2 OU 3 ATRAVES DE ATOI(CHOOSE)
    // system("clear");
    // printHeader();
    // std::cout << "* SELECT OPTION: > ";
    Contact Contacts;
    PhoneBook* List;

    // getline(std::cin, choose);
    // if (choose.empty())
    // {
    //     std::cout << std::endl;
    //     std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
    //     return (0);
    // }
    //choice = atoi(choose.c_str());
    // while (!choice)
    // {
    //     system("clear");
    //     printHeader();
    //     std::cout << "* SELECT OPTION: > ";
    //     getline(std::cin, choose);
    //     choice = atoi(choose.c_str());
    //     if (std::cin.eof())
    //     {
    //         std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
    //         return (0);
    //     }
    // }

    while (choose.empty())
        {
            system("clear");
            std::cout << "ESTA NO LOOP CHOOSE.EMPTY" << std::endl;
            printHeader();
            std::cout << "* SELECT OPTION: > ";
            getline(std::cin, choose);
            if (std::cin.eof())
            {
                std::cout << std::endl;
                std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
                return (0);
            }
        }

    //choose_convert(choose, &choice);
    if (choose == "ADD")
        choice = 1;
    else if (choose == "SEARCH")
        choice = 2;
    else if (choose == "EXIT")
        choice = 3;

    std::cout << "DEBUG 1: " << choose << std::endl;
    std::cout << "Choose: " << choose << std::endl;
    std::cout << "Choice: " << choice << std::endl;

    int contactNumber = 0;
    while(true)
    {
        if (choose == "ADD")
        choice = 1;
        else if (choose == "SEARCH")
            choice = 2;
        else if (choose == "EXIT")
            choice = 3;
        else
            choice = 0;
        std::cout << "DEBUG 2: " << choose << std::endl;
        std::cout << "Choose: " << choose << std::endl;
        std::cout << "Choice: " << choice << std::endl;
        switch (choice)
        {
            case 1:
            {
                system("clear");
                std::cout << "ENTERED CASE 1" << std::endl;
                printHeader();
                List = Contacts.getList();
                List[i].setContact(choice);
                i++;
                if (contactNumber < 8)
                    contactNumber++;
                if (i == 8)
                    i = 0;
                break;
            }
            case 2:
            {
                system("clear");
                std::cout << "ENTERED CASE 2" << std::endl;
                std::cout << "+------------+------------+------------+------------+" << std::endl;
                std::cout << "|   Index    | First Name | Last  Name |  Nickname  |" << std::endl;
                std::cout << "+------------+------------+------------+------------+" << std::endl;

                while (j < contactNumber)
                {
                    List[j].getContact(j);
                    j++;
                }

                std::cout << "+------------+------------+------------+------------+" << std::endl;

                if (j != 0)
                {
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
                        {
                            system("clear");
                            List[x - 1].showInfo();
                            system("clear");
                            std::cout << "+------------+------------+------------+------------+" << std::endl;
                            std::cout << "|   Index    | First Name | Last  Name |  Nickname  |" << std::endl;
                            std::cout << "+------------+------------+------------+------------+" << std::endl;
                            j = 0;

                            while (j < contactNumber)
                            {
                                List[j].getContact(j);
                                j++;
                            }

                            std::cout << "+------------+------------+------------+------------+" << std::endl;
                        }

                        
                    } while (chooseContact != "EXIT");
                    
                }

                j = 0;
                break;
            }
            default:
            {
                system("clear");
                std::cout << "DEBUG 3: " << choose << std::endl;
                std::cout << "Choose: " << choose << std::endl;
                std::cout << "Choice: " << choice << std::endl;
            }
        }
        system("clear");
        printHeader();
        std::cout << "* SELECT OPTION: ";
        getline(std::cin, choose);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
            return (0);
        }
        if (choose == "ADD")
        choice = 1;
        else if (choose == "SEARCH")
            choice = 2;
        else if (choose == "EXIT")
            choice = 3;
        else
            choice = 0;
        std::cout << "Choose NO FINAL DO LOOP: " << choose << std::endl;
        std::cout << "Choose: " << choose << std::endl;
        std::cout << "Choice: " << choice << std::endl;
        if (choice == 3)
        {
            std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
            return (0);
        }
    }
    std::cout << "Choose: " << choose << std::endl;
    std::cout << "Choice: " << choice << std::endl;
    return (0);
}