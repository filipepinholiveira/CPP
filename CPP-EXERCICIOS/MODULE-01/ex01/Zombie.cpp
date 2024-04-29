
    #include "Zombie.hpp"

    


    // simple constructor
    Zombie::Zombie()
    {
        std::cout << BLUE << "Simple constructor called" << RESET << std::endl;
    }

    // construtor with name atribute
    Zombie::Zombie(std::string NAME_GIVEN)
    {
        std::cout << GREEN << "Atribute constructor called" << RESET << std::endl;
        this->_Name = NAME_GIVEN;
    }

    // Destructor 
    Zombie::~Zombie()
    {
        std:: cout << RED << "<" << this->_Name << "> destroied" << RESET << std::endl;
    }

    void    Zombie::announce(void)
    {
        std:: cout << YELLOW << "<" << this->_Name << "> Braaaaaaaainz" << RESET << std::endl;
    }
