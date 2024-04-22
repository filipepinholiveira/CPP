
#include "Contact.hpp"

void    printHeader()
{
    std::cout << " ***************************************************" << std::endl; 
    std::cout << "                                                    " << std::endl;
    std::cout << "   *******  *****  *****  *    *  **     *******    " << std::endl;
    std::cout << "   *     *  *      *      * *  *  *  *   *     *    " << std::endl;
    std::cout << "   *******  *  **  ***    *  * *  *   *  *******    " << std::endl;
    std::cout << "   *     *  *   *  *      *   **  *   *  *     *    " << std::endl;
    std::cout << "   *     *  *****  *****  *    *  ****   *     *    " << std::endl;
    std::cout << "                                                    " << std::endl;
    std::cout << " ***************************************************" << std::endl;
    std::cout << "  ADD ()            SEARCH ()             EXIT ()  *" << std::endl;
    std::cout << "****************************************************" << std::endl;
}

// void    choose_convert(std::string choose, int *choice)
// {
//     if (choose == "ADD")
//         *choice = 1;
//     if (choose == "SEARCH")
//         *choice = 2;
//     if (choose == "EXIT")
//         *choice = 3;

// }

int check_isprint(std::string arg)
{
    const char * words;
    words = arg.c_str();
    while (words++)
    {
        if (isdigit(*words) == 0)
            return (0);
    }
    return (1);
}
