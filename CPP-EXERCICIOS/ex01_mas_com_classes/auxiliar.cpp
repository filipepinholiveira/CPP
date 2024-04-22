
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
    std::cout << "* 1 - ADD ()       2 - SEARCH ()      3 - EXIT ()  *" << std::endl;
    std::cout << "****************************************************" << std::endl;
}

void    choose_convert(std::string choose, int *choice)
{
    if (choose == "ADD")
        *choice = 1;
    if (choose == "SEARCH")
        *choice = 2;
    if (choose == "EXIT")
        *choice = 3;

}