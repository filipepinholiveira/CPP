
#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl filipe;
    if (argc == 2)
    {
        std::string level = argv[1];
        filipe.complain(level);
    }
    else if(argc == 1)
        std::cout << "Complain needed" << std::endl;
    else
        std::cout << "One complain at the time" << std::endl;
    return 0;
}