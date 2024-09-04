#include "tools.hpp"

int main()
{

int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;

//     int a = 1;
//     int b = 2;

//     std::cout << "BEFORE SWAP\nA: " << a << "\nB: " << b << std::endl;

//     int c = 10;
//     int d = 20;

//     std::cout << "Min is " << min(c, d) << std::endl;
//     std::cout << "Max is " << max(c, d) << std::endl;


//     sort(a, b);

//     std::cout << "AFTER SWAP\nA: " << a << "\nB: " << b << std::endl;

//    std::cout << "Min is " << min(c, d) << std::endl;
//     std::cout << "Max is " << max(c, d) << std::endl;
}