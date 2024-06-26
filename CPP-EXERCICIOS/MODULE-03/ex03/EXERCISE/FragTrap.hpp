#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    /* data */

public:

// ********************************* CANONICAL FORM INIT *********************************

// default constructor
FragTrap();

// Constructor with name arg
FragTrap(std::string Name);

// copy constructor
FragTrap (FragTrap const &copy);

// assigned operator
FragTrap &operator=(FragTrap const &src);

// destructor
~FragTrap();

// ********************************* CANONICAL FORM END *********************************




// ********************************* OTHER FORM INIT *********************************

// methods
void highFivesGuys(void);

// overload operators


// ********************************* OTHER FORM END *********************************


};

// operator << overload
std::ostream &operator<<(std::ostream &output, FragTrap const &src);



