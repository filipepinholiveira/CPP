
#include "sample.class.hpp"


int main()
{
	Sample instancia;
	Sample *instancia_ptr = &instancia;

	int     Sample::*p = NULL;
	void	(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of member foo " << instancia.foo << std::endl;
	instancia.*p = 21;
	std::cout << "Value of member foo " << instancia.foo << std::endl;
	instancia_ptr->*p = 42;
	std::cout << "Value of member foo " << instancia.foo << std::endl;


	f = &Sample::bar;

	(instancia.*f)();
	(instancia_ptr->*f)();

	return 0;
}