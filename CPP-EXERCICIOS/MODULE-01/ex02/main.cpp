
# include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    // std::string stringREF = string;
    // std::string *stringPTR = &stringREF;

    std::cout << "MEMORY ADRESS:" << std::endl;
    std::cout << "string: " << &string << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl;
    std::cout << "VALUE IN IT:" << std::endl;

    //str = "NEW";
    
    std::cout << "string: " << string << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
    return(0);
}