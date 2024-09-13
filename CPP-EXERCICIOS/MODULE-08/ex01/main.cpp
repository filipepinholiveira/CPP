#include "Span.hpp"


int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

// int main()
// {
  
//     try 
//     {
//         Span sp(10);  // Cria um Span com capacidade para 10 elementos
//         int shortPath;
//         int longPath;

//         // Inicializa a semente para geração de números aleatórios
//         std::srand(static_cast<unsigned int>(std::time(0)));

//         // Loop para adicionar 10 números aleatórios
//         for (int i = 0; i < 10000000; ++i) 
//         {
//             int randomValue = std::rand() % 10000000 - 1;  // Gera um número aleatório entre -5000 e 4999
//             std::cout << "Adicionando número: " << randomValue << std::endl;
//             sp.addNumber(randomValue);
//         }

//         // Exibe os elementos adicionados
//         std::cout << "Elementos no vetor: ";
//         sp.PrintElements();  // Imprime os elementos do vetor
//         shortPath = sp.shortestSpan();
//         std::cout << "Shortest: " << shortPath << std::endl;

//         longPath = sp. longestSpan();
//         std::cout << "Longest: " << longPath << std::endl; 

//     } 
//     catch (const std::exception& e) 
//     {
//         std::cerr << "Erro: " << e.what() << '\n';
//     }

//     return 0;
// }