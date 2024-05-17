
#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

 //////////////////////////////////////////////////////////////////////////   
    // Fixed a;
    // Fixed b(a);
    // Fixed c;

    // c = b;
    // std::cout << "A: " << a.Fixed_Getter() << std::endl;
    // std::cout << "B: " << b.Fixed_Getter() << std::endl;
    // std::cout << "c: " << c.Fixed_Getter() << std::endl;

    // a.setRawBits(12);
    // b.setRawBits(6);

    // std::cout << "A: " << a.Fixed_Getter() << std::endl;
    // std::cout << "B: " << b.Fixed_Getter() << std::endl;
    // std::cout << "c: " << c.Fixed_Getter() << std::endl;


    return 0;
}