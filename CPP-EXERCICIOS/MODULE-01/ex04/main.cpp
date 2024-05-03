
#include <iostream>
#include <fstream>

int main()
{
    std::string Ementa;
    std::cout << "Adicione Pedido. Digite FIM para sair" << std::endl;
    std::ofstream file("Ementa.txt");
    while (Ementa != "FIM")
    {
        getline(std::cin, Ementa);
        if (Ementa != "FIM")
            file << Ementa << std::endl;
    }
    file.close();
}