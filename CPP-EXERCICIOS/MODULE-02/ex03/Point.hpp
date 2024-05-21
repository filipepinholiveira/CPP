
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    /* data */
    Fixed const _point_x;
    Fixed const _point_y;
    
    
public:

    // default constructor
    Point();

    // constructor with args
    Point(const float f1, const float f2);

    //• Copy constructor
    Point(Point const &copy);

    // • Copy assignment operator
    Point &operator=(Point const &src);

    // destructor
    ~Point();


    // GETTERS

    int get_x();
    int get_y();
};


#endif