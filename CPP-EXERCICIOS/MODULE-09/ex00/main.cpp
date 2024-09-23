#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void) argv;

    if (argc != 2 || (argc == 2 && (strcmp(argv[1], "input.txt") != 0)))
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
     
    BitcoinExchange Teste;
    Teste.searchAndExchange();

    return 0;
}