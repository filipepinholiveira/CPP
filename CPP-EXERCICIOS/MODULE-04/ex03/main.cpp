
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
	
	delete bob;
	delete me;
	delete src;
	
std::cout << "\n\n";

//------------------------//

// 	IMateriaSource	*matSrc = new MateriaSource();
// 	matSrc->learnMateria(new Ice());
// 	matSrc->learnMateria(new Cure());

// 	ICharacter	*jonh = new Character("Jonh");
// 	ICharacter	*hank = new Character("Hank");

// 	AMateria	*mat;
// 	for (int i = 0; i < 5; i++)
// 	{
// 		if (i > 0)
// 			std::cout << std::endl;
// 		std::cout << "Materia #" << i << ": ";
// 		if (i % 2 == 0)
// 			mat = matSrc->createMateria("cure");
// 		else
// 			mat = matSrc->createMateria("ice");
// 		jonh->equip(mat);
// 		mat = NULL;
// 	}

// 	jonh->use(0, *hank);
// 	jonh->use(1, *hank);
// 	jonh->use(0, *jonh);

// 	for (int i = 0; i < 5; i++)
// 	{
// 		jonh->unequip(i);
// 	}

// 	mat = matSrc->createMateria("ice");
// 	jonh->equip(mat);

// 	delete jonh;
// 	delete hank;
// 	delete matSrc;

// std::cout << "\n" << "Deep Copy-----------"<< "\n\n";

// 	IMateriaSource	*copySrc = new MateriaSource();
// 	copySrc->learnMateria(new Ice());
// 	copySrc->learnMateria(new Cure());

// 	Ice	*basic = new Ice();
// 	Ice *temp = new Ice(*basic);
	
// 	std::cout << std::endl << "temp : " << temp << " | type: " << temp->getType() << std::endl;
// 	delete	temp;
	
// 	std::cout << std::endl << "basic: " << basic << " | type: " << basic->getType() << std::endl;
// 	delete	basic;
	
// 	std::cout << std::endl;
// 	delete	copySrc;
	
    return 0;
}