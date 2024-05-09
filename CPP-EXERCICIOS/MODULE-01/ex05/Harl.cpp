
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
    // Ponteiro para membro da classe para acessar métodos privados
    void (Harl::*ptrToMethod)() = NULL;
    // Harl *ptrToMethod = NULL;
    //int case_level;
    std::string cases[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*array[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};


    for (int i = 0; i < 4; i++)
    {
        if (cases[i] == level)
            for (int j = i; j < 4; j++)
            {
                ptrToMethod = array[j];
                if (ptrToMethod != NULL)
                (this->*ptrToMethod)();
            }
    }
    if (!ptrToMethod || level.empty())
    {
        std::cout << "Unknown complaint type" << std::endl;
    }
}

