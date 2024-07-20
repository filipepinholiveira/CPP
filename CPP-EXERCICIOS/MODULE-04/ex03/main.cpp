
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateria.hpp"
#include "MateriaSource.hpp"

int main()
{

IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
ICharacter* Copy = new Character("Copy");
Copy->use(0, *bob);
Copy->use(1, *bob);
*Copy = *me;
delete me;
Copy->use(0, *bob);
Copy->use(1, *bob);
delete bob;
delete Copy;
delete src;

    std::cout << "\n\n";

//------------------------//


std::cout << "\n" << "Deep Copy-----------"<< "\n\n";

	IMateriaSource	*copySrc = new MateriaSource();
	copySrc->learnMateria(new Ice());
	copySrc->learnMateria(new Cure());

	Ice	*basic = new Ice();
	Ice *temp = new Ice(*basic);
	
	std::cout << std::endl << "temp : " << temp << " | type: " << temp->getType() << std::endl;
	delete	temp;
	
	std::cout << std::endl << "basic: " << basic << " | type: " << basic->getType() << std::endl;
	delete	basic;
	
	std::cout << std::endl;
	delete	copySrc;
	
    return 0;
}