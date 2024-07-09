
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal teste;
    teste.makeSound();
    teste.getType();
    Dog Licia;
    Licia.makeSound();
    Licia.getType();
    Cat Cacau;
    Cacau.makeSound();
    Cacau.getType();

    std::cout << teste << std::endl;
    std::cout << Licia << std::endl;
    std::cout << Cacau << std::endl;



    return (0);
}