#pragma once
#include <iostream>
#include <cstdlib>
#include <string.h>

class ScalarConverter
{
    private:

        ScalarConverter();

        ScalarConverter (ScalarConverter const &copy);

        ScalarConverter &operator=(ScalarConverter const &source);

        ~ScalarConverter();

    public:

        static void    convert(std::string value);

        static void    executeConvert(double num, char *end);

        class NotValidInput : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

};
std::ostream& operator<<(std::ostream& o, ScalarConverter& value);