
#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl filipe;
    if (argc == 2)
    {
        std::string level = argv[1];
        filipe.complain(level);
    }
    else
        std::cout << "Complain needed" << std::endl;
    return 0;
}
