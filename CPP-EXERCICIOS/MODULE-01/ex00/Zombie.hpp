
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
    void    announce(void);
};

#endif
