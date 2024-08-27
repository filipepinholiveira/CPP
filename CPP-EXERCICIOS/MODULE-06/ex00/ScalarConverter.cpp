#include "ScalarConverter.hpp"
#include <cstdlib>

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

void    ScalarConverter::convert(std::string value)
{
    // double strtod(const char *str, char **endptr);

    char *end;

    double num_d = strtod(value.c_str(), &end);
    std::cout << "Char: " << static_cast<char>(num_d) << std::endl; // falta fazer conversao
    std::cout << "Int: " << static_cast<int>(num_d) << std::endl; // falta fazer conversao
    std::cout << "Float: " << static_cast<float>(num_d) << "f" << std::endl; // falta fazer conversao
    std::cout << "Double: " << num_d << std::endl; // feita a conversao (acho eu)
    std::cout << "Parte nao numerica: " << end << std::endl;

}

const char * ScalarConverter::NotValidInput::what() const throw()
{
    return "Not valid imput\n";
}


std::ostream& operator<<(std::ostream& o, ScalarConverter& value)
{
 //what to print in output overload
    (void) value;
    return o;
}