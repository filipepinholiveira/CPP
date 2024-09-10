
#include "easyfind.hpp"


int main()
{
    std::list<int>                              lst1; 

    lst1.push_back(1);
    lst1.push_back(17); 
    lst1.push_back(42);

    try
    {
        /* code */
        easyfind(lst1, 17);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}