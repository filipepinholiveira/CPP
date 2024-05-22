
#include "Point.hpp"
#include "bsp.hpp"

int main()
{
    Point a(0.0f, 0.0f);
    Point b(0.0f,5.0f);
    Point c(5.0f,0.0f);

    Point d(0.0f,0.9f);

    bsp(a, b, c, d);

    return 0;
}