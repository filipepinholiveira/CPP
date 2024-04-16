

#include <iostream>

int main ()
{
    main:

    int Clube;
    int numero_socio;
    std::string Nome;
    std::cout << "Qual é o seu clube?\n [1]: Sócio FCP\n [2]: Simpatizante FCP\n [3]: Sócio SLB\n [4]: Simpatizante SLB\n [5]: Sócio SCP\n [6]: Simpatizante SCP\n" << std::endl;
    std::cin >> Clube;

    switch (Clube)
    {
    case 1:
    case 2:
        system ("clear");
        std::cout << "\n\n\nOlá Super Dragao. Qual é o seu nome? \n";
        std::cin >> Nome;
        std::cout << "Obrigado " << Nome << ".\n";
        switch (Clube)
        {
            case 1:
                std::cout << "Introduzao seu número de sócio: \n";
                std::cin >> numero_socio;
                std::cout << "Obrigado. Numero " << numero_socio << " validado.\n";
                system ("echo Porto é o maior");
                break;
            case 2:
                std::cout << "Lamentamos, " << Nome << ", esta área é reservada a associados\n";
                break;
        }
        break;
    case 3:
    case 4:
        system ("clear");
        std::cout << "\n\n\nOlá NN Boy. Qual é o seu nome? \n";
        std::cin >> Nome;
        std::cout << "Obrigado " << Nome << ".\n";
        switch (Clube)
        {
            case 3:
                std::cout << "Introduzao seu número de sócio: \n";
                std::cin >> numero_socio;
                std::cout << "Obrigado. Numero " << numero_socio << " validado.\n";
                system ("echo Porto é o maior");
                break;
            case 4:
                std::cout << "Lamentamos, " << Nome << ", esta área é reservada a associados\n";
                break;
        }
        break;
    case 5:
    case 6:
        system ("clear");
        std::cout << "\n\n\nOlá Lagarto. Qual é o seu nome? \n";
        std::cin >> Nome;
        std::cout << "Obrigado " << Nome << ".\n";
        switch (Clube)
        {
        case 5:
            std::cout << "Introduzao seu número de sócio: \n";
            std::cin >> numero_socio;
            std::cout << "Obrigado. Numero " << numero_socio << " validado.\n";
            system ("echo Porto é o maior");
            break;
        case 6:
            std::cout << "Lamentamos, " << Nome << ", esta área é reservada a associados\n";
            break;
        }
        break;
    default:
        std::cout << "Clube nao reconhecido\n";
        goto main;
    }
    
    return 0;
}