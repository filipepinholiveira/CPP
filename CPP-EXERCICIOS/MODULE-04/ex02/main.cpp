
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    //const Animal;
    const Animal* j = new Dog();
    const Animal* i = new Cat();





    delete j;//should not create a leak
    delete i;

    return (0);

    std::cout << std::endl << std::endl;


}