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

void    ScalarConverter::executeConvert(double num, char *end)
{
    if (strlen(end) > 1)
    {
        throw NotValidInput();
    }
    else
    {
        std::cout << "Char: " << static_cast<char>(num) << std::endl; // falta fazer conversao
        std::cout << "Int: " << static_cast<int>(num) << std::endl; // falta fazer conversao
        std::cout << "Float: " << static_cast<float>(num) << "f" << std::endl; // falta fazer conversao
        std::cout << "Double: " << num << std::endl; // feita a conversao (acho eu)
        std::cout << "Parte nao numerica: " << end << std::endl;
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