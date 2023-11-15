

#include <iostream>

int main ()
{
    main:

    int Clube;
    std::string Nome;
    std::cout << "Qual é o seu clube?\n [1]: FCP\n [2]: SLB\n [3]: SCP\n" << std::endl;
    std::cin >> Clube;

    switch (Clube)
    {
    case 1:
        system ("clear");
        std::cout << "\n\n\nOlá Super Dragao. Qual é o seu nome? " << std::endl;
        std::cin >> Nome;
        std::cout << "Obrigado " << Nome << ". Vamos Jogar!!!" << std::endl;
        break;
    case 2:
        system ("clear");
        std::cout << "\n\n\nOlá NN Boy. Qual é o seu nome? " << std::endl;
        std::cin >> Nome;
        std::cout << "Obrigado " << Nome << ". Vamos Jogar!!!" << std::endl;
        break;
    case 3:
        system ("clear");
        std::cout << "\n\n\nOlá Lagarto. Qual é o seu nome? " << std::endl;
        std::cin >> Nome;
        std::cout << "Obrigado " << Nome << ". Vamos Jogar!!!" << std::endl;
        break;
    case a:
        
    default:
        std::cout << "Clube nao reconhecido" << std::endl;
        goto main;
    }
    
    return 0;
}