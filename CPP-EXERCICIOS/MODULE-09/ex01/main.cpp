#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc > 2)
        std::cerr << "Can only acept one argument" << std::endl;

    if (argv[1] == NULL)
        std::cerr << "Need valid iput" << std::endl;

    RPN createdStack;
    createdStack.executeOperation(argv[1]);

    return 0;
}