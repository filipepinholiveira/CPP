
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Animal teste;
    // teste.makeSound();
    // std::cout << teste.getType() << std::endl;
    // Dog Licia;
    // Licia.makeSound();
    // Licia.getType();
    // Cat Cacau;
    // Cacau.makeSound();
    // Cacau.getType();

    // std::cout << teste << std::endl;
    // std::cout << Licia << std::endl;
    // std::cout << Cacau << std::endl;


    WrongAnimal* meta = new WrongAnimal();
    WrongAnimal* i = new WrongCat();
    Animal* j = new Dog();
    Animal * k = new Cat();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    k->makeSound();

    return (0);
}