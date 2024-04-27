
#include "Phonebook.hpp"

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    int i = 0;
    int j = 0;
    int x = 0;
    std::string chooseContact; 
    std::string choose; // ARGUMENTO QUE VAI RECEBER A ESCOLHA (1, 2 OU 3)
    int choice = 0; // ARGUMENTO QUE VAI RECEBER 1, 2 OU 3 ATRAVES DE ATOI(CHOOSE)
    system("clear");
    printHeader();
    std::cout << "* SELECT OPTION: > ";
    Phonebook Contacts;
    Contact* List;

    while (choose.empty())
    {
        getline(std::cin, choose);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            std:: cout << std::endl;
            std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
            return (0);
        }
    }
    if (choose == "ADD")
        choice = 1;
    else if (choose == "SEARCH")
        choice = 2;
    else if (choose == "EXIT")
        choice = 3;
    else
        choice = 0;
    int contactNumber = 0;
    while(choice != 3)
    {
        
            switch (choice)
            {
                case 1:
                {
                    system("clear");
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
                    std::cout << "+------------+------------+------------+------------+" << std::endl;
                    std::cout << "|   Index    | First Name | Last  Name |  Nickname  |" << std::endl;
                    std::cout << "+------------+------------+------------+------------+" << std::endl;
                    if (contactNumber > 0)
                    {
                        while (j < contactNumber)
                        {
                            List[j].getContact(j);
                            j++;
                        }
                    }
                    else
                        std::cout << "+------------+  NO CONTACTS ADDED YET  +------------+" << std::endl;

                    std::cout << "+------------+------------+------------+------------+" << std::endl;

                    if (j != 0)
                    {
                        do
                        {
                            std:: cout << std::endl;
                            std:: cout << "Choose client INDEX to show INFO or digit RETURN to leave: ";

                            do
                            {
                                if (std::cin.eof())
                                {
                                    std:: cout << std::endl;
                                    std:: cout << std::endl;
                                    std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
                                    return (0);
                                }
                                getline(std::cin, chooseContact);
                                x = atoi(chooseContact.c_str());
                                if ((x < 1 || x > j) && chooseContact != "RETURN" && !(std::cin.eof()))
                                {
                                    std::cout << "Invalid choice" << std::endl;
                                    std:: cout << "Choose client INDEX to show INFO or digit RETURN to leave: ";
                                }
                            } while ((x < 1 || x > j) && chooseContact != "RETURN");

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

                            
                        } while (chooseContact != "RETURN");                        
                    }
                    else
                        {
                            do
                            {
                                if (std::cin.eof())
                                {
                                    std:: cout << std::endl;
                                    std:: cout << std::endl;
                                    std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
                                    return (0);
                                }
                                std:: cout << std::endl;
                                std:: cout << "Digit RETURN to leave: ";
                                getline(std::cin, chooseContact);
                                x = atoi(chooseContact.c_str());
                            } while (chooseContact != "RETURN");
                            system("clear");
                        }

                    j = 0;
                    break;
                }
                default:
                {
                    system("clear");
                }
            }
        if (contactNumber > 0)
            system("clear");
        printHeader();
        std::cout << "* SELECT OPTION: ";
        getline(std::cin, choose);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            std:: cout << std::endl;
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
    }
    std:: cout << std::endl;
    std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
    return (0);
}