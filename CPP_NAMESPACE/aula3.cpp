

#include <iostream>




#define canal std::cout << "\nO Filipe é o maior\n\n";


using namespace std;

// criei um namespace para definir o valor da string teste
namespace Filipe
{
    // usar :: ou std:: ou string estando ja using namespace acima é o mesmo
    string teste = "Jaquim";
    ::string vidas = "1000000000";
    string tiros = "2000000000";
    ::string life = "3000000000";
}

// criei uma funçao para printar
void print( std::string s ) 
{ std::cout << s; }


int main()
{
    string teste, vidas, tiros, life;

    std::cout << "Digite nome do personagem: ";
    getline(std::cin, teste);
    //std::cin >> teste;
    std::cout << "Quantas vidas? ";
    getline(std::cin, vidas);
    std::cout << "Quantos tiros? ";
    getline(std::cin, tiros);
    std::cout << "Quanta life? ";
    getline(std::cin, life);
                print("\n");
    using namespace Filipe;
    {
        print("No namespace Filipe:");
        print("\n");
        // usar cout com frase direta e valor de variavel:
        cout << "Nome da personagem: " << Filipe::teste << "";
        //print("Nome da personagem: [" << Filipe::teste << "]");
        //print(Filipe::teste);
        print("\n");
        print("Nº Vidas da personagem: ");
        print(Filipe::vidas);
        print("\n");
        print("Número de tiros: ");
        print(Filipe::tiros);
        print("\n");
        print("Life da personagem: ");
        print(Filipe::life);
            
    } // namespace Filipe;
    
    print("\n\n");
    print("Recebido por input:");
    print("\n");
    print("Nome da personagem: ");
    print(teste);
    print("\n");
    print("Nº Vidas da personagem: ");
    print(vidas);
    print("\n");
    print("Número de tiros: ");
    print(tiros);
    print("\n");
    print("Life da personagem: ");
    print(life);
    print("\n");

    canal

    //cout << teste << "\n" << vidas << endl;

    return 0;
}
