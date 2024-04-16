

#include <iostream>
#include <cstdlib>

int main()
{
    std::string Nome;
    std::cout << "introduz nome de ficheiro a criar: " << std::endl;
    std::cin >> Nome;
    system ("mkdir " << Nome << "");
}