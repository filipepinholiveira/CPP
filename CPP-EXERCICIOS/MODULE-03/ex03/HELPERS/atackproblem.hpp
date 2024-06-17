#pragma once

class ClapTrap 
{
protected:
    std::string _Name;
    int _Hit;
    int _Energy;
    int _Atack;

public:
    // construtor args
    ClapTrap(std::string name);
};



class FragTrap : virtual public ClapTrap 
{
public:
    FragTrap(std::string name) : ClapTrap(name) 
    {
        std::cout << "FragTrap constructor called" << std::endl;
        _Hit = 100;
        _Energy = 100;
        _Atack = 30;
    }
};