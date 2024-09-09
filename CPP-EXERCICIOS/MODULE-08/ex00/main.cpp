
#include "easyfind.hpp"


int main()
{
    std::list<int>                              lst1; 

    lst1.push_back(1);
    lst1.push_back(17); 
    lst1.push_back(42);

    if (easyfind(lst1, 1000))
        std::cout << "Existe no array\n";
    else
         std::cout << "Nao existe no array\n";

    return 0;
}