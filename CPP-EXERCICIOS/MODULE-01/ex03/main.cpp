
#include "Weapon.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    std::cout << club.getType() << std::endl;
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    return(0);
}
