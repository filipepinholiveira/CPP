#include "tools.hpp"

int main()
{
    int a = 1;
    int b = 2;

    std::cout << "BEFORE SWAP\nA: " << a << "\nB: " << b << std::endl;

    int c = 10;
    int d = 20;

    std::cout << "Min is " << min(c, d) << std::endl;
    std::cout << "Max is " << max(c, d) << std::endl;


    sort(a, b);

    std::cout << "AFTER SWAP\nA: " << a << "\nB: " << b << std::endl;

   std::cout << "Min is " << min(c, d) << std::endl;
    std::cout << "Max is " << max(c, d) << std::endl;
}