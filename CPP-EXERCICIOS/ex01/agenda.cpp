
#include <iostream>
#include <stdlib.h>

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    int choice;
    std::cout << "*** MY AGENDA ***" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "* SELECT OPTION:" << std::endl;
    std::cout << "* 1 - ADD ()" << std::endl;
    std::cout << "* 2 - SEARCH ()" << std::endl;
    std::cout << "* 3 - EXIT ()" << std::endl;
    std::cin >> choice;
    
    while (choice != 3)
    {
        if (choice == 0)
        {
            std::cout << "INVALID INPUT" << std::endl;
            std::cout << "*" << std::endl;
            std::cout << "*" << std::endl;
            break;
        }
        else
        {
            switch (choice)
            {
            case 1:
                system("clear");
                std::cout << "* 1 - ADD (X)" << std::endl;
                std::cout << "New contact added" << std::endl;
                std::cout << "*" << std::endl;
                std::cout << "*" << std::endl;
                break;
            case 2:
                system("clear");
                std::cout << "* 1 - SEARCH (X)" << std::endl;
                std::cout << "Contact info" << std::endl;
                std::cout << "*" << std::endl;
                std::cout << "*" << std::endl;
                break;
            
            default: 
                std::cout << "INVALID OPTION" << std::endl;
                std::cout << "*" << std::endl;
                std::cout << "*" << std::endl;
                break;
            }
            std::cout << "* SELECT OPTION:" << std::endl;
            std::cout << "* 1 - ADD ()" << std::endl;
            std::cout << "* 2 - SEARCH ()" << std::endl;
            std::cout << "* 3 - EXIT ()" << std::endl;
            std::cin >> choice;
        }
    }
    std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
    return (0);
}