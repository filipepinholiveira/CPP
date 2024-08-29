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

                if(std::isnan(num) || std::isinf(num) || num < 0 || num > 127)
            std::cout << "Char: impossible" << std::endl; 
        else if (isprint(num))
            std::cout << "Char: " << static_cast<char>(num) << std::endl;
        else if(size == 1)
            std::cout << "Char: " << end << std::endl;
        // else if ((num < 0 || num > 31) && num != 127)
        //     std::cout << "Char 3: " << end << std::endl;
        else if ((num >= 0 && num <= 31) || num == 127)
            std::cout << "Char: Non displayable" << std::endl; 

        // INT
        if (std::isnan(num) || std::isinf(num) || num > INT_MAX || num < INT_MIN)
            std::cout << "Int: impossible" << std::endl;
        else if(size == 1)
            std::cout << "Int: " <<  static_cast<long long int>(*end) << std::endl;
        else
            std::cout << "Int: " << static_cast<long long int>(num) << std::endl;
        
        // FLOAT
        if (std::isnan(num) || std::isinf(num) || num > INT_MAX || num < INT_MIN)
            std::cout << "Float: " << static_cast<float>(num) << "f" << std::endl;
        else if(size == 1)
            std::cout << "Float: " <<  std::fixed << std::setprecision(1) << static_cast<float>(*end) << "f" << std::endl;
        else
            std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
        
        //DOUBLE
        if (std::isnan(num) || std::isinf(num) || num > INT_MAX || num < INT_MIN)
            std::cout << "Double: " << static_cast<double>(num) << std::endl;
        else if(size == 1)
            std::cout << "Double: " <<  std::fixed << std::setprecision(1) << static_cast<double>(*end) << std::endl;
        else
            std::cout << "Double: " << std::fixed << std::setprecision(1) <<static_cast<double>(num) << std::endl;
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
    return "Not valid imput";
}


std::ostream& operator<<(std::ostream& o, ScalarConverter& value)
{
 //what to print in output overload
    (void) value;
    return o;
}