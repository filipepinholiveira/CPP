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

bool    ScalarConverter::verifyArg(double num, char *arg)
{
    if (strlen(arg) > 1)
        return 1;
    else if (strlen(arg) == 1 && *arg != 'f')
        return 1;
    else if(num > INT_MAX || num < INT_MIN)
        return 1;
    return 0;
}

void    ScalarConverter::executeConvert(double num, char *end)
{
    if (verifyArg(num, end))
    {
        throw NotValidInput();
    }
    else
    {   if (isprint(static_cast<char>(num)))
            std::cout << "Char: " << static_cast<char>(num) << std::endl;
        else if(std::isnan(num))
            std::cout << "Char: impossible" << std::endl; 
        else
            std::cout << "Char: Non displayable" << std::endl; 

        if (std::isnan(num))
            std::cout << "Int: impossible" << std::endl;
        else
            std::cout << "Int: " << static_cast<long long int>(num) << std::endl;
        
        std::cout << "Float: " << std::fixed << std::setprecision(1) <<static_cast<float>(num) << "f" << std::endl;
        
        std::cout << "Double: " << std::fixed << std::setprecision(1) <<static_cast<double>(num) << std::endl;
    }
}


void    ScalarConverter::convert(std::string value)
{
    // double strtod(const char *str, char **endptr);

    char *end;

    double num_d = strtod(value.c_str(), &end);

    try
    {
        executeConvert(num_d, end);
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