
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
        std::cout << "Invalid imput" << std::endl;
    // filipe.complain("INFO");
    // filipe.complain("WARNING");
    // filipe.complain("ERROR");
    // filipe.complain("");
    // filipe.complain(" ");

    return 0;
}    // Harl *ptrToMethod = NULL;
    //int case_level;
