#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// ********************************* CANONICAL FORM INIT *********************************

// default constructor
Character::Character()
{
    std::cout << "Character default constructor called" << std::endl;
    _name = "No name set";
    for (int i = 0; i < 4; i++)
    {
        Purse[i] = NULL;
        Floor[i] = NULL;
    }
}

// constructor with args
Character::Character(std::string name)
{
    std::cout << "Character constructor with args called" << std::endl;
    this->_name = name;
     for (int i = 0; i < 4; i++)
    {
        Purse[i] = NULL;
        Floor[i] = NULL;
    }
}

// copy constructor

    Character::Character(Character const &copy)
    {
        *this = copy;
    }


// operator =
    Character &Character::operator=(Character const &source)
    {
        if (this != &source)
        {
            for (int i = 0; i < 4; i++)
            {
                if (this->Purse[i])
                    delete (Purse[i]);
                if (this->Floor[i])
                    delete (Floor[i]);
            }
            for (int i = 0; i < 4; i++) 
            {
                if (source.Purse[i])
                    this->Purse[i] = source.Purse[i]->clone();
                else
                    this->Purse[i] = NULL;

                if (source.Floor[i])
                    this->Floor[i] = source.Floor[i]->clone();
                else
                    this->Floor[i] = NULL;
            }
        }
        return *this;
    }


// destructor
Character::~Character()
{
    std::cout << "Character default destructor called" << std::endl;
    // for (int i = 0; i < 4; i++)
    //     {
    //         if (Purse[i])
    //             delete (Purse[i]);
    //         if (Floor[i])
    //             delete (Floor[i]);
    //     }
}



// ********************************* CANONICAL FORM INIT *********************************





// ********************************* OTHER FORM INIT *********************************


// getters




// setters



// methods

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    if (m == NULL)
	{
		std::cout << "Need create Materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (Purse[i] == NULL)
		{
			if (Purse[i] != NULL)
			{
				delete Floor[i],
				Floor[i] = NULL;
			}
			std::cout << _name << " equiped " << m->getType() << std::endl;
			Purse[i] = m;
			return ;
		}
	}
	std::cout << "Character " << _name << " can't equip " << std::endl;
	if (m)
	{
		delete (m);
		m = NULL;
	}
	return ;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || Floor[idx] != NULL )
	{
		std::cout << " out of reach " << std:: endl;
		return ;
	}
	if (Purse[idx] == NULL)
	{
		std::cout << _name << " has nothing to unequip " << std::endl;
		return ;
	}
	std::cout << _name << " unequiped " << Purse[idx]->getType() << std::endl;
	Floor[idx] = Purse[idx];
	Purse[idx] = NULL;
	return ;
}


// ver se funciona

void Character::use( int idx, ICharacter& target )
{
	if (idx < 0 || idx > 3 || Purse[idx] == NULL)
	{
		std::cout << _name << " has nothing to use" << std::endl;	
		return ;
	}
	Purse[idx]->use(target);
}


// void Character::use(int idx, ICharacter& target)
// {
//     if (this->Purse[idx]->getType() == "ice")
//     {
//         Ice* ice = dynamic_cast<Ice*>(this->Purse[idx]);
//         if (ice) 
//         {
//             ice->use(target);
//         }
//     }
//     else if (this->Purse[idx]->getType() == "cure")
//     {
//         Cure* cure = dynamic_cast<Cure*>(this->Purse[idx]);
//         if (cure) 
//         {
//             cure->use(target);
//         }
//     }
// }


// operator <<



// ********************************* OTHER FORM INIT *********************************