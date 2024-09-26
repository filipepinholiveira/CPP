#include "RPN.hpp"

bool validInput(const char *str) 
{
    int operandFlag = 0;
    int operatorFlag = 0;
    int i = 0;
    const char *value;

    while (str[i]) 
    {
        value = &str[i];
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '-' /*|| str[i] == '.'*/)
            i++;
        if (!isdigit(str[i]) && str[i] != '*' && str[i] != '+' && str[i] != '/' && str[i] != '-')
        {
            return false;
        }
        if (atoi(value) > 10)
            return false;
        if (isdigit(str[i]))
            operandFlag++;
        else 
            operatorFlag++;
        i++;
    }
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
        std::cerr << "Error" << std::endl;
        return 1;
    }

    if (!validInput(argv[1]))
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    RPN createdStack;
    createdStack.executeOperation(argv[1]);

    return 0;
}