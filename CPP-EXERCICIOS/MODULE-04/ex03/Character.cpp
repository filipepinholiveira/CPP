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
    
    
    /*Para alcançar o comportamento desejado, onde você pode atribuir Copy = me sem ter que deletar Copy primeiro, 
    precisamos implementar uma cópia profunda adequada e garantir que o destrutor e o operador de atribuição funcionem corretamente. 
    O operador de atribuição deve liberar a memória antiga antes de copiar os novos dados, e o destrutor deve limpar a memória alocada.*/

// copy constructor

    /* O construtor de cópia deve criar cópias profundas dos objetos contidos no array Purse e Floor: */
    Character::Character(Character const &copy) 
    {
    this->_name = copy._name;
    for (int i = 0; i < 4; i++) 
    {
        if (copy.Purse[i]) 
        {
            this->Purse[i] = copy.Purse[i]->clone();
        } 
        else 
        {
            this->Purse[i] = NULL;
        }
        if (copy.Floor[i]) 
        {
            this->Floor[i] = copy.Floor[i]->clone();
        } 
        else 
        {
            this->Floor[i] = NULL;
        }
    }
}

    
// operator =

/*O operador de atribuição deve liberar a memória previamente alocada antes de copiar os novos dados. Aqui está a implementação correta:*/


Character& Character::operator=(Character const &source) 
{
    if (this != &source) 
    {
        // Copie o nome
        this->_name = source._name;

        // Libere os objetos existentes
        for (int i = 0; i < 4; i++) {
            if (this->Purse[i]) 
            {
                delete this->Purse[i];
                this->Purse[i] = NULL;
            }
            if (this->Floor[i]) 
            {
                delete this->Floor[i];
                this->Floor[i] = NULL;
            }
        }
        // Copie profundamente os objetos
        for (int i = 0; i < 4; i++) 
        {
            if (source.Purse[i]) 
            {
                this->Purse[i] = source.Purse[i]->clone();
            } 
            else 
            {
                this->Purse[i] = NULL;
            }
            if (source.Floor[i]) 
            {
                this->Floor[i] = source.Floor[i]->clone();
            } 
            else 
            {
                this->Floor[i] = NULL;
            }
        }
    }
    return *this;
}


// destructor

/* O destrutor deve liberar a memória de todos os objetos no array Purse e Floor: */

Character::~Character() {
    std::cout << "Character default destructor called" << std::endl;
    for (int i = 0; i < 4; i++) 
    {
        if (Purse[i]) 
        {
            delete Purse[i];
        }
        if (Floor[i]) 
        {
            delete Floor[i];
        }
    }
}


/* Com essas mudanças, o código agora realiza uma cópia profunda dos objetos Character, garantindo que Copy = me 
funcione corretamente sem necessidade de deletar Copy antes. Isso evita a destruição dupla e gerencia a memória corretamente*/

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