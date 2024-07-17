
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << std::endl << std::endl;
    
    std::cout << " CAO " << std::endl << std::endl;
    
    const Animal* j = new Dog();
    delete j;//should not create a leak

    std::cout << std::endl << " CAO " << std::endl << std::endl;

    std::cout << " ------------------------ " << std::endl << std::endl;


    std::cout << " GATO " << std::endl << std::endl;

    const Animal* i = new Cat();
    delete i;

    std::cout << std::endl << " GATO " << std::endl << std::endl;


    return (0);

}