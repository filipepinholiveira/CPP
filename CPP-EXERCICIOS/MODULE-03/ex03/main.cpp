#include "FragTrap.hpp"

class Base 
{
public:
    int value;
    virtual void display() 
    {
        std::cout << "Base value: " << value << std::endl;
    }
};

class Derived : public Base 
{
public:
    int value; // Isto sombra a variável 'value' na classe base
    void display() 
    {
        std::cout << "Derived value: " << value << std::endl;
    }
};


int main()
{
    // ClapTrap teste;
    // ClapTrap teste2("Vitima");
    // std::cout << teste << std::endl;
    // std::cout << teste2 << std::endl;
    // teste.attack(teste2.getName());
    // teste2.takeDamage(teste.getAtack());
    // teste2.beRepaired(20);
    // std::cout << teste << std::endl;
    // std::cout << teste2 << std::endl;


    // FragTrap teste3;
    // FragTrap teste4("Filipe");
    // teste4.highFivesGuys();
    // std::cout << teste3 << std::endl;
    // std::cout << teste4 << std::endl;

    Derived d;
    d.value = 20; // Está se referindo a 'Derived::value'
    d.Base::value = 10; // Explicitamente se referindo a 'Base::value'
    d.display();

}