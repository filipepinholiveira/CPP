
#include "Fixed.hpp"

int main()
{

    Fixed a(4);
    Fixed b(5);
    Fixed c(a);
    Fixed d( Fixed( 5.05f ) + Fixed( 2 ) );
    Fixed e( Fixed( 5.05f ) - Fixed( 2 ) );
    Fixed f( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed g( Fixed( 5.05f ) / Fixed( 2 ) );
    

    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;
    std::cout << "C: " << c << std::endl;
    std::cout << "D: " << d << std::endl;
    std::cout << "E: " << e << std::endl;
    std::cout << "F: " << f << std::endl;
    std::cout << "G: " << g << std::endl;

     if (a == c)
    {
        std::cout << a << " == " << c << std::endl;
        std::cout << "Bool '==' a funcionar" << std::endl;
    }

    if (a != b)
    {
        std::cout << a << " != " << b << std::endl;
        std::cout << "Bool '!=' a funcionar" << std::endl;
    }

    if (b > a)
    {
        std::cout << b << " > " << a << std::endl;
        std::cout << "Bool '>' a funcionar" << std::endl;
    }

    if (a < b)
    {
        std::cout << a << " < " << b << std::endl;
        std::cout << "Bool '<' a funcionar" << std::endl;
    }

    if (c >= a)
    {
        std::cout << c << " >= " << a << std::endl;
        std::cout << "Bool >= a funcionar" << std::endl;
    }

    if (a <= b)
    {
        std::cout << a << " <= " << b << std::endl;
        std::cout << "Bool <= a funcionar" << std::endl;
    }Fixed d( Fixed( 5.05f ) + Fixed( 2 ) );
    Fixed e( Fixed( 5.05f ) - Fixed( 2 ) );
    Fixed f( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed g( Fixed( 5.05f ) / Fixed( 2 ) );



    //Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}