
#include <iostream>
#include <list>
#include <stdlib.h>



int main()
{
    int rows, cols;
    std::cout << "Insert number of rows: ";
    std::cin >> rows;
    std::cout << "Insert number of columns: ";
    std::cin >> cols;
    // criacaçao de array bidimensional: 
    int ** md_array = new int*[rows]; // array de arrays criado alocando memoria atraves de new, um ponteiro para um array de int
    for (int i = 0; i < rows; i++)
    {
        md_array[i] = new int[cols]; // array de int criado atraves de new
    }
    // libertar a memoria usada para array de arrays
    for (int i = 0; i < rows; i++)
    {
        delete[]md_array[i];
    }
    delete[]md_array;
    md_array = NULL;
}