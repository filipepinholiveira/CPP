
#include <iostream>
#include "sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(42)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar(void) const 
/* ao definir este const nao conseguimos mudar as variaveis 
mesmo que nao sejam variaveis const como verás se descomentares a linha 25
com a mensagem error: assignment of member ‘Sample::qd’ in read-only object */
{
    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->qd = " << this->qd << std::endl;

    //this->qd = 0;

    return;
}
