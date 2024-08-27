#pragma once
#include <iostream>

class ScalarConverter
{
    private:

        ScalarConverter();

        ScalarConverter (ScalarConverter const &copy);

        ScalarConverter &operator=(ScalarConverter const &source);

        ~ScalarConverter();
        
    public:

        static void    convert(std::string value);

        class NotValidInput : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

};
std::ostream& operator<<(std::ostream& o, ScalarConverter& value);