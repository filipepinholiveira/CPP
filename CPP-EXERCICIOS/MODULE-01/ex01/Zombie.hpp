
#ifndef ZOMBIE_H
#define ZOMBIE_H
# include <iostream>
#include <string>

// controll codes
#define RESET			"\033[0m"
#define GREEN			"\033[32m"
#define YELLOW			"\033[33m"
#define BLUE			"\033[34m"
#define RED				"\033[31m"
#define UP				"\033[A"
#define CUT				"\033[K"


class Zombie
{
private:
    std::string _Name;

public:

    // Construcot
    Zombie();
    
    // Constructor with atributes
    Zombie(std::string NAME);

    // Destructor
    ~Zombie();

    // Methods

    // zumbie announces itself
    void    announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif