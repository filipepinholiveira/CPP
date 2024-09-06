#include "Serializer.hpp"

std::ostream& operator<<(std::ostream& o, Data& value)
{
 //what to print in output overload
    std::cout << "Nome: " << value._nome << "\nIdade: " << value._idade << std::endl;
    return o;
}

int main()
{
    
    
    /*
    
    Resumo

    Estrutura Data: Criar uma estrutura Data com alguns membros de dados.

    Classe Serializer: Implementar métodos estáticos para serialização e desserialização.

    Teste: Escrever um programa para testar os métodos da Serializer e garantir que funcionam conforme esperado.

    Entrega: Incluir todos os arquivos relevantes na entrega.

    Esse exercício ajuda a entender a manipulação de ponteiros e conversão de tipos em C++. */

    // Data Eu("Filipe", 43);

    // std::cout << "Eu: " << Eu << std::endl;

    // uintptr_t Teste = Serializer::serialize(&Eu);

    // Data* Recetor = Serializer::deserialize(Teste);;


    // std::cout << "Recetor: " << Recetor << std::endl;

    Data myData("Filipe", 43);

    // Serializa o ponteiro
    uintptr_t serialized = Serializer::serialize(&myData);

    // Desserializa o ponteiro
    Data* deserialized = NULL;

    // Verifica se a desserialização retorna o ponteiro original

    std::cout << "ERRO PORQUE DESERIALIZED ACABA DE SER CRIADA: \n\n";

    if (deserialized == &myData) 
    {
        std::cout << "Serialização e desserialização bem-sucedidas!" << std::endl;
        std::cout << "ID: " << deserialized->_idade << std::endl;
        std::cout << "Nome: " << deserialized->_nome << std::endl;
    } 
    else 
    {
        std::cout << "Falha na serialização e desserialização\n." << std::endl;
    }

    deserialized = Serializer::deserialize(serialized);

    std::cout << "SUCESSO PORQUE DESERIALIZED FOI EXECUTADA: \n\n";


       if (deserialized == &myData) 
       {
        std::cout << "Serialização e desserialização bem-sucedidas!" << std::endl;
        std::cout << "ID: " << deserialized->_idade << std::endl;
        std::cout << "Nome: " << deserialized->_nome << std::endl;
    } 
    else 
    {
        std::cout << "Falha na serialização e desserialização." << std::endl;
    }

    return 0;
}