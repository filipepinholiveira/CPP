
#include "Zombie.hpp"

int main()
{
    std::string name = "NUNO";
    Zombie *array = zombieHorde(5, name);
    
    delete []array;

    return(0);
}