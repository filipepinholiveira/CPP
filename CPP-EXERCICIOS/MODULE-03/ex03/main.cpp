#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // ClapTrap teste;
    //ClapTrap teste2("Vitima");
    // std::cout << teste << std::endl;
    // std::cout << teste2 << std::endl;
    // teste.attack(teste2.getName());
    // teste2.takeDamage(teste.getAtack());
    // teste2.beRepaired(20);
    // std::cout << teste << std::endl;
    // std::cout << teste2 << std::endl;


    //FragTrap teste3;
    // FragTrap teste4("Filipe");
    // teste4.highFivesGuys();
    // std::cout << teste3 << std::endl;
    // std::cout << teste4 << std::endl;

    ClapTrap teste("Clap");
    FragTrap teste2("Frag");;
    ScavTrap teste3("Scav");;
    DiamondTrap teste4("Diamond");;

    std::cout << teste << std::endl;
    std::cout << teste2 << std::endl;
    std::cout << teste3 << std::endl;
    std::cout << teste4 << std::endl;

    teste.attack("Bora");
    teste2.attack("Cenas");
    teste3.attack("Vamos");
    teste4.attack("Joquim");

    return (0);
}