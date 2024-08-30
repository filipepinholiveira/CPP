#include "Base.hpp"

int main()
{
    Base * Obj = generate();
    identify(Obj);
    Base * Not = NULL;
    identify(Not);
    return 0;
}