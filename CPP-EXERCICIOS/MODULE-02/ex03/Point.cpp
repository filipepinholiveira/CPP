
#include "Point.hpp"

// default constructor
Point::Point()
{
    std::cout << "Default constructor called" << std::endl;
}

// constructor with args
Point::Point(const float f1, const float f2) : _point_x(f1), _point_y(f2)
{
    std::cout << "Constructor with args called" << std::endl;
}

// Copy constructor
Point::Point(Point const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

// • Copy assignment operator
Point & Point::operator=(Point const & src)
{
     std::cout << "Copy Assignment operator '=' called" << std::endl;
     if (this != &src)
        this->_point_x = src.get_x();


}

//GETTERS

int Point::get_x()
{
    int x_value = this->_point_x.getRawBits();
    return (x_value);
}

int Point::get_y()
{
    int y_value = this->_point_y.getRawBits();
    return (y_value);
}

// destructor
Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}
