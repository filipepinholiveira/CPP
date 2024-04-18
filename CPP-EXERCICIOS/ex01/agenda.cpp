
#include "Contact.hpp"

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    // CONJUNTO DE ARGUMENTOS PARA RECEBEREM INFO DO UTILIZADOR
    std::string NameMain;
    std::string LastNameMain;
    std::string NickNameMain;
    std::string PhoneNumberMain;
    std::string DarkestSecretMain;
    
    std::string choose; // ARGUMENTO QUE VAI RECEBER A ESCOLHA (1, 2 OU 3)
    int choice; // ARGUMENTO QUE VAI RECEBER 1, 2 OU 3 ATRAVES DE ATOI(CHOOSE)

    Contact list[8]; // ARRAY DE INSTANCIAS QUE TEM QUE SER PHONEBOOK E NAO CONTACT
    int i = 0; // PARA INCREMENTAR DE 0 A 7 E CORRER O ARRAY DE INSTANCIAS 
    int j = 0; // PARA INCREMENTAR A LISTA DE CONTACTOS CRIADOS E MOSTRAR 
    int x = 0; // VALOR DE INDEX CORRESPONDENTE A SELECAO DE CONTACTO DE QUEM QUEREMOS VER INFO
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
                            list[x - 1].showInfo();
                            system("clear");
                            std::cout << "+------------+------------+------------+------------+" << std::endl;
                            std::cout << "|   Index    | First Name | Last  Name |  Nickname  |" << std::endl;
                            std::cout << "+------------+------------+------------+------------+" << std::endl;
                            j = 0;
                            while (j < contactNumber)
                            {
                                list[j].getContact(j);
                                j++;
                            }
                            std::cout << "+------------+------------+------------+------------+" << std::endl;
                        }
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