
#include "easyfind.hpp"


int main()
{
    std::list<int>                              lst1; 

    lst1.push_back(1);
    lst1.push_back(17); 
    //lst1.push_back(42);
    lst1.push_back(4) ;


    try
    {
        /* code */
        easyfind(lst1, 90000);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}