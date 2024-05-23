
#include "Point.hpp"

int main()
{
    Point a(0.0f, 0.0f);
    Point b(0.0f, 3.0f);
    Point c(3.0f,0.0f);

    Point d(0.1f, 2.8f);

    (bsp(a, b, c, d)) ? std::cout << "Inside\n" : std::cout << "Outside\n";
    




    return 0;
}


