
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[N];

    for (int index = 0; index < N; index++)
    {
        // while(name.empty())
        // {
        //     std::cout << "Enter name: " << std::endl;
        //     getline(std::cin, name);
        // }
        horde[index] = Zombie(name);
        horde[index].announce();
        name.clear();
    }

    return (horde);
}