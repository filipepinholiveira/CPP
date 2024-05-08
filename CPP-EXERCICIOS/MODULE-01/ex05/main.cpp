
#include "Harl.hpp"

int main()
{
    Harl filipe;
    std::string Compplain_type;

    std::cout << "Enter complain (DEBUG, INFO, WARNING, ERROR) ==> ";
    std::getline(std::cin, Compplain_type);
    filipe.complain(Compplain_type);
    return 0;
}