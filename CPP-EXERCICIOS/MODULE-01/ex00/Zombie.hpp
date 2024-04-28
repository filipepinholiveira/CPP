
#ifndef ZOMBIE_H
#define ZOMBIE_H
# include <iostream>


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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
