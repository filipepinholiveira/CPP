
#include <iostream>
#include <fstream>

int main()
{

    // este exemplo serve para criar um ficheiro a partir
    // de um imput do utilizador usando o ofstream

    // std::string Ementa;
    // std::cout << "Adicione Pedido. Digite FIM para sair" << std::endl;
    // std::ofstream file("Jesse.txt");
    // while (Ementa != "FIM")
    // {
    //     getline(std::cin, Ementa);
    //     if (Ementa != "FIM")
    //         file << Ementa << std::endl;
    // }
    // file.close();

    // este exemplo serve para abrir um ficheiro e escrever
    // o seu conteudo

    std::ifstream file("TESTE.txt");
    std::string Ementa;
    std::cout << "Ementa: " << std::endl;
    while (!file.eof())
    {
        (getline(file, Ementa));
        std::cout << Ementa << std::endl;
    }
    file.close();

}