#include "ScavTrap.hpp"

int main()
{
    ClapTrap teste;
    ClapTrap teste2("Vitima");
    // std::cout << teste << std::endl;
    // std::cout << teste2 << std::endl;
    // teste.attack(teste2.getName());
    // teste2.takeDamage(teste.getAtack());
    // teste2.beRepaired(20);
    std::cout << teste << std::endl;
    std::cout << teste2 << std::endl;
    ScavTrap teste3("Serena");
    ScavTrap teste4;
    std::cout << teste3 << std::endl;
    teste3.takeDamage(teste3.getAtack());
    std::cout << teste3 << std::endl;
    std::cout << teste4 << std::endl;
    teste4.attack(teste2.getName());
    teste4.guardGate();
}