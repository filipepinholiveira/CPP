#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter (ScalarConverter const &copy)
{
    *this = copy;
}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &source)
{
    if (this != &source)
    {
        //copy definition
    }
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Default destructor called" << std::endl;
}

bool    ScalarConverter::verifyArg(double num, char *arg, int size)
{
    (void) num;
    if (strlen(arg) > 1)
        return 1;
    else if (size > 1 && strlen(arg) == 1 && *arg != 'f')
        return 1;
    // else if(num > INT_MAX || num < INT_MIN)
    //     return 1;
    return 0;
}

void    ScalarConverter::executeConvert(double num, char *end, int size)
{
    if (verifyArg(num, end, size))
    {
        throw NotValidInput();
    }
    else
    {   
        // CHAR

        // std::cout << "NUM " << num << std::endl;
        // std::cout << "END " << end << std::endl;

        /* 
        
        O static_cast em C++ é uma forma de conversão de tipo que realiza conversões entre tipos de dados, 
        como conversões entre tipos primitivos, entre tipos de ponteiros e entre tipos de classe. 
        A conversão é feita em tempo de compilação e é uma das formas mais seguras de conversão de tipos, 
        com a condição de que o tipo de conversão seja válido e bem definido.

        static_cast<long long int> é uma forma segura e eficiente de converter tipos numéricos e outros tipos 
        de dados para long long int, desde que a conversão seja válida e não cause perda de dados. 
        Para conversões que envolvem ponteiros e tipos não relacionados, é importante ser cauteloso e
        considerar outras formas de conversão, como reinterpret_cast, e garantir que a conversão não leve a comportamentos indefinidos.

        */

        if(std::isnan(num) || std::isinf(num) || num < 0 || num > 127)
            std::cout << "char: impossible" << std::endl; 
        else if (isprint(num))
            std::cout << "char: " << static_cast<char>(num) << std::endl;
        else if(size == 1 && end[0] != '\0')
            std::cout << "char: " << end << std::endl;
        else if ((num >= 0 && num <= 31) || num == 127)
            std::cout << "char: Non displayable" << std::endl; 

        // INT
        if (std::isnan(num) || std::isinf(num) || num > INT_MAX || num < INT_MIN)
            std::cout << "int: impossible" << std::endl;
        else if(size == 1)
            std::cout << "int: " <<  static_cast<long long int>(*end) << std::endl;
        else
            std::cout << "int: " << static_cast<long long int>(num) << std::endl;
        
        // FLOAT
        if (std::isnan(num) || std::isinf(num) || num > INT_MAX || num < INT_MIN)
            std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
        else if(size == 1)
            std::cout << "float: " <<  std::fixed << std::setprecision(1) << static_cast<float>(*end) << "f" << std::endl;
        else
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
        
        //DOUBLE
        if (std::isnan(num) || std::isinf(num) || num > INT_MAX || num < INT_MIN)
            std::cout << "double: " << static_cast<double>(num) << std::endl;
        else if(size == 1)
            std::cout << "double: " <<  std::fixed << std::setprecision(1) << static_cast<double>(*end) << std::endl;
        else
            std::cout << "double: " << std::fixed << std::setprecision(1) <<static_cast<double>(num) << std::endl;
    }
}


void    ScalarConverter::convert(std::string value)
{
    // double strtod(const char *str, char **endptr);

    char *end;
    int size = strlen(value.c_str());

    double num_d = strtod(value.c_str(), &end);

    try
    {
        executeConvert(num_d, end, size);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

const char * ScalarConverter::NotValidInput::what() const throw()
{
    return "Not valid input";
}


std::ostream& operator<<(std::ostream& o, ScalarConverter& value)
{
 //what to print in output overload
    (void) value;
    return o;
}