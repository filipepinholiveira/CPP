#include "atackproblem.hpp"

    // construtor args
    ClapTrap(std::string name) : _Name(name), _Hit(0), _Energy(0), _Atack(0) 
    {
        std::cout << "ClapTrap constructor called" << std::endl;
    }

    FragTrap(std::string name) : ClapTrap(name) 
    {
        std::cout << "FragTrap constructor called" << std::endl;
        _Hit = 100;
        _Energy = 100;
        _Atack = 30;
    }