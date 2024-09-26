#include "RPN.hpp"

bool containsOnlyDigits(const char *str) 
{
    //int pointflag = 0;
    int i = 1;
    while (str[i]) 
    {
        // if (str[i] == '.')
        //     pointflag++;
        // if (pointflag > 1)
        //     return false;
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '-' || str[i] == '.')
            i++;
        if (!isdigit(str[i]) && str[i] != 'x' && str[i] != '+')
        {
            return false;
        }
        i++;
    }
    return true;
}


int main(int argc, char **argv)
{
    if (argc > 2)
        {
        std::cerr << "Can only acept one argument" << std::endl;
        return 1;
        }

    if (argv[1] == NULL)
    {
        std::cerr << "Need valid input" << std::endl;
        return 1;
    }

    if (!containsOnlyDigits(argv[1]))
    {
        std::cerr << "Need valid input" << std::endl;
        return 1;
    }



    RPN createdStack;
    createdStack.executeOperation(argv[1]);

    return 0;
}