#include "polymorphism.hpp"

int main()
{
    // square s(10);
    // rectangle r(20, 15);

    // square *sqrptr = &r;
    // rectangle *rctptr = &r;

    // print_call(s);
    // print_call(r);
    // print_call(*sqrptr);
    // sqrptr->print();
    // std::cout << "X: " << rctptr->getterX() << std::endl;
    // std::cout << "X: " << sqrptr->getterX() << std::endl;

    square *squares[] = {new square(3), new rectangle(1, 2), new Foo(5, 6)};

    for(square *s : squares)
        s->print();

    for(square *s : squares)
        delete s;

    return 0;
}