
#include "Point.hpp"

// default constructor
Point::Point()
{
    // std::cout << "Default constructor called" << std::endl;
}

// constructor with args
Point::Point(const float f1, const float f2) : _point_x(f1), _point_y(f2)
{
    // std::cout << "Constructor with args called" << std::endl;
}

// Copy constructor
Point::Point(Point const &copy) : _point_x(copy._point_x), _point_y(copy._point_y)
{
    // std::cout << "Copy constructor called" << std::endl;
    
}

//GETTERS

Fixed Point::get_x() const
{
    return (Fixed(this->_point_x));
}

Fixed Point::get_y() const
{
    return (Fixed(this->_point_y));
}


// • Copy assignment operator
Point & Point::operator=(Point const & src)
{
    // std::cout << "Copy Assignment operator '=' called" << std::endl;
    if (this != &src)
        return(*this);
    return(*this);
}



// destructor
Point::~Point()
{
    // std::cout << "Destructor called" << std::endl;
}
