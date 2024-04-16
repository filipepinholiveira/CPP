
#include <iostream>
#include <list>
#include <stdlib.h>



int main()
{
    int size;
    std::cout << "Size: ";
    std::cin >> size;

    int *array = new int[size]; // new é o comando que aloca memória

    for (int i = 0; i < size; i++)
    {
        std::cout << "Array [" << i << "] : ";
        std::cin >> array[i];
    }
    std::cout << "Array of numbers: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
        //std::cout << *(array+i) << " "; ---> o mesmo que a linha acima
    }

    delete[]array; // delete é o comando para libertar a memoria
    array = NULL; // uma vez apagada deveremos apontar para nulo para garantir que nao fica a apontar para poscao de memoria errada
    std::cout << "\n";
}