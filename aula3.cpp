

#include <iostream>

#define canal std::cout << "\nO Filipe é o maior\n\n";
//using std;
void print( std::string s ) { std::cout << s << std::endl; }
int main()
{
    std::string teste, vidas, tiros, life;

    std::cout << "Digite nome do personagem: ";
    getline(std::cin, teste);
    //std::cin >> teste;
    std::cout << "Quantas vidas? ";
    getline(std::cin, vidas);
    std::cout << "Quantos tiros? ";
    getline(std::cin, tiros);
    std::cout << "Quanta life? ";
    getline(std::cin, life);
    print(teste);

    canal

    //cout << teste << "\n" << vidas << endl;

    return 0;
}
