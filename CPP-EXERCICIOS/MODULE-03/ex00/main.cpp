
#include "ClapTrap.hpp"

int main()
{
    ClapTrap teste("Gervásio");
    std::cout << "Energia do " << teste.getName() << " é " << teste.getEnergy() << std::endl;
    teste.attack("Malaquias");
    std::cout << teste.getEnergy() << std::endl;
    std::cout << "Energia do " << teste.getName() << " é " << teste.getEnergy() << std::endl;
    return 0;
    
}