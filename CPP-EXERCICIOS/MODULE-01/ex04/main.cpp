
#include <iostream>
#include <fstream>

int main()
{

    // este exemplo serve para criar um ficheiro a partir
    // de um imput do utilizador usando o ofstream

    // std::string Ementa;
    // std::cout << "Adicione Pedido. Digite FIM para sair" << std::endl;
    // std::ofstream file("Ementa.txt");
    // while (Ementa != "FIM")
    // {
    //     getline(std::cin, Ementa);
    //     if (Ementa != "FIM")
    //         file << Ementa << std::endl;
    // }
    // file.close();

    std::ifstream file("TESTE.txt");
    std::string Ementa;
    while(file)
        file >> Ementa;
    file.close();
    std::cout << "Tu comeste " << Ementa << std::endl;

}