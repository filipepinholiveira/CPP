
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

/*

• Default constructor
• Constructor with atributes
• Copy constructor
• Copy assignment operator
• Destructor

*/

class Fixed
{
private:
    /* data */
    int _FtxPtNbr;
    static const int _fract_bits = 8;

public:
    
    //• Default constructor
    Fixed();
    
    //• Constructor with const int atributes
    Fixed(const int FxPoint);

    //• Constructor with const float atributes
    Fixed(const float FxPoint);

    //• Copy constructor
    Fixed(Fixed const & src);

    // • Copy assignment operator
    Fixed & operator=(Fixed const & rhs);

    bool operator==(Fixed const & rhs);

    bool operator!=(Fixed const & rhs);

    bool operator>(Fixed const & rhs);

    bool operator<(Fixed const & rhs);

    bool operator>=(Fixed const & rhs);

    bool operator<=(Fixed const & rhs);

    Fixed operator+(Fixed const & rhs);

    Fixed operator-(Fixed const & rhs);

    Fixed operator*(Fixed const & rhs);

    Fixed operator/(Fixed const & rhs);

    Fixed & operator++();

    Fixed operator++(int);

    Fixed & operator--();

    Fixed operator--(int);

    static const Fixed & min(Fixed const & value1, Fixed const & value2);

    static Fixed & min(Fixed & value1, Fixed & value2);

    static const Fixed & max(Fixed const & value1, Fixed const & value2);

    static Fixed & max(Fixed & value1, Fixed & value2);

    //• Destructor
    ~Fixed();

    //getter
    int getRawBits() const;

    // setter
    void setRawBits( int const raw );

    int toInt(void) const;

    float toFloat(void) const;

};


// cout << overload
std::ostream &operator<<(std::ostream &outputStream, const Fixed &object);





#endif