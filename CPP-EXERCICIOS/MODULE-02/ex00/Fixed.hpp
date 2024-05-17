
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

/*

• Default constructor
• Copy constructor
• Copy assignment operator
• Destructor

*/

class Fixed
{
private:
    /* data */
    int FtxPtNbr;
    static const int fract_bits = 8;


public:
    
    //• Default constructor
    Fixed();
    
    //• Copy constructor
    Fixed(Fixed const & src);

    // • Copy assignment operator
    Fixed & operator=(Fixed const & rhs);

    //• Destructor
    ~Fixed();

    //getter
    int getRawBits() const;

    // setter
    void setRawBits( int const raw );

};






#endif