
#include "ClapTrap.hpp"

int main()
{

    ClapTrap teste("Gervásio");
    ClapTrap teste2("Vitima");
    std::cout << teste << std::endl;
    std::cout << teste2 << std::endl;
    std::cout << "Energia do " << teste.getName() << " é " << teste.getEnergy() << std::endl;
    std::cout << "Vida do " << teste2.getName() << " é " << teste.getHit() << std::endl;
    teste.attack(teste2.getName());
    std::cout << "Teste get atack :" << teste.getAtack() << std::endl;
    teste2.takeDamage(teste.getAtack());
    std::cout << "Energia do " << teste.getName() << " é " << teste.getEnergy() << std::endl;
    std::cout << "Vida do " << teste2.getName() << " apos ataque é " << teste2.getHit() << std::endl;
    teste2.beRepaired(20);
    std::cout << "Vida do " << teste2.getName() << " apos reparacao é " << teste2.getHit() << std::endl;
    std::cout << std::endl;
    std::cout << teste << std::endl;
    std::cout << teste2 << std::endl;
    return 0;
    
}