
# include <iostream>

int main()
{
    std::string example = "HI THIS IS BRAIN";
    std::string * stringPTR = &example;
    std::string &stringREF = example;

    std::cout << "MEMORY ADRESSES" << std::endl;
    std::cout << "Memory adress of example: " << &example << std::endl;
    std::cout << "Memory adress of stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory adress of stringREF: " << &stringREF << std::endl;
    std::cout << "VARIABLES VALUE" << std::endl;
    std::cout << "Value of example: " << example << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

    return(0);
}