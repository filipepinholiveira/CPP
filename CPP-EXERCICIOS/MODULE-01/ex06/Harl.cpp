
#include "Harl.hpp"

Harl::Harl()
{
    // constructor called

}

Harl::~Harl()
{
    // destructor called
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
    int case_level = -1;
    std::string cases[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (cases[i] == level)
            case_level = i;
    }
    
    switch (case_level)
    {
    case 0:
        Harl::debug();
        __attribute__((fallthrough));
    case 1:
        Harl::info();
        __attribute__((fallthrough));
    case 2:
        Harl::warning();
        __attribute__((fallthrough));
    case 3:
        Harl::error();    
        break;
    
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

