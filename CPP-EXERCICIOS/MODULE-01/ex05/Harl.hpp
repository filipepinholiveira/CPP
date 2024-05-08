#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:


    void debug( void );
    
    void info( void )
    {
        std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    }

    void warning( void )
    {
        std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    }

    void error( void )
    {
        std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

public:

    Harl();
    ~Harl();

    void complain(std::string level);
};









#endif