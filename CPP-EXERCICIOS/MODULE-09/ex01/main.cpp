#include "RPN.hpp"

bool validInput(const char *str) 
{
    int operandFlag = 0;
    int operatorFlag = 0;
    int i = 0;

    while (str[i]) 
    {
        // if (str[i] == '.')
        //     pointflag++;
        // if (pointflag > 1)
        //     return false;
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '-' /*|| str[i] == '.'*/)
            i++;
        if (!isdigit(str[i]) && str[i] != 'x' && str[i] != '+' && str[i] != ':' && str[i] != '-')
        {
            return false;
        }
        if (isdigit(str[i]))
            operandFlag++;
        else 
            operatorFlag++;
        i++;
    }
    std::cout << "Operand nbr: " << operandFlag << std::endl;
    std::cout << "Operator nbr: " << operatorFlag << std::endl;
    if (operandFlag <= operatorFlag)
        return false;
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

    if (!validInput(argv[1]))
    {
        std::cerr << "Need valid input" << std::endl;
        return 1;
    }



    RPN createdStack;
    createdStack.executeOperation(argv[1]);

    return 0;
}