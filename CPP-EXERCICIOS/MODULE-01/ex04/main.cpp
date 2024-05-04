
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    //(void) argv;
    if (argc != 4)
    {
        std::cout << "Invalid imputs" << std::endl;
        return(1);
    }
    std::ifstream file1(argv[1]);
    if (!file1) 
    {
        std::cerr << "Erro ao abrir o arquivo de entrada." << std::endl;
        return 1;
    }
    std::string outputFilename = std::string(argv[1]) + ".replace";
    std::ofstream file2(outputFilename.c_str());
    if (!file2) 
    {
        std::cerr << "Erro ao criar o arquivo de saída." << std::endl;
        return 1;
    }
    file2 << file1.rdbuf();
    file1.close();
    file2.close();

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

    // std::ifstream file("TESTE.txt");
    // std::string Ementa;
    // std::cout << "Ementa: " << std::endl;
    // while (!file.eof())
    // {
    //     (getline(file, Ementa));
    //     std::cout << Ementa << std::endl;
    // }
    // file.close();

}