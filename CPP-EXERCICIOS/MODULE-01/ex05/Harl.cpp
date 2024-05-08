
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


void Harl::complain(std::string level)
{
    int level_case;

    if (level == "DEBUG")
        level_case = 0;
    else if (level == "INFO")
        level_case = 1;
    else if (level == "WARNING")
        level_case = 2;
    else if (level == "ERROR")
        level_case = 3;
    switch (level_case)
    {
        case 0:
            debug();
            break;
        case 1:
            info();
            break;
        case 2:
            warning();
            break;
        case 3:
            error();
            break;
    default:
        std::cout << "Unknown complain type" << std::endl;
        break;
}
}
