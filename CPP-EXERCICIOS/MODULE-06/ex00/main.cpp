#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    (void) argv;
    if (argc != 2)
    {
        std::cout << "Invalid input number\n";
        return 1;
    }
    else
    {
        ScalarConverter::convert(argv[1]);
    }
    
    return 0;
}