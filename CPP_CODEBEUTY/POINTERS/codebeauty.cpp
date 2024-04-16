
#include <iostream>
#include <list>
#include <stdlib.h>


void    printnumbers(int *number)
{
    std::cout << *number << std::endl;
}

void    printletter(char *letter)
{
    std::cout << *letter << std::endl;
}

// como trabalhar com void *
void    printall(void *content, char flag)
{
    switch (flag)
    {
        case 'i': std::cout << *((int *)content) << std::endl; break;
        case 'c': std::cout << *((char *)content) << std::endl; break;
        default: std::cout << "Not valid flag" << std::endl; break;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';

    printnumbers(&number);
    printletter(&letter);
    printall(&number, 'i');
    printall(&letter, 'c');
    printall(&letter, 'f');

}