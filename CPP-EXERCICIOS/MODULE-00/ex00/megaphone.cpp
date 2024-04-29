
#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        (void) argv;
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        int i = 1;
        while (i < argc)
        {
            int j = 0;
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);            
                j++;
            }
            i++;
        }

    }

    std::cout << std::endl;
    return 0;
}