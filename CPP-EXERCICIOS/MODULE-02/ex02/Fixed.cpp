
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : _FtxPtNbr(0)
{
    std::cout << "Default constructor called" << std::endl;
}

/*
 * the shift expression calculates the scale factor
 * since its 8 its like multiplying the number by 256 = 2^8
 * an example were the value equals to 5:
 * 5 << 8 = 1280 || 1280 / 256 = 5
 * 1280 represents 5 in fixed point notation
 * in binnary 5 is 101 and 1280 is 10100000000
 * so the 0s after the 101 are the fractional bits
*/

//• Constructor with const int atributes
Fixed::Fixed(const int FxPoint)
{
    std::cout << "Int constructor called" << std::endl;
    this->_FtxPtNbr = FxPoint * ( 1 << this->_fract_bits);
}

/*
 * same example were value is 5:
 * (1 << 8) = 256
 * 5 * 256 = 1280
 * roundf is used to round the value to the nearest integer
 * for example 5.5 would be rounded to 6
 * in binary 6 is 110 and 1536 is 11000000000
 * so the 0s after the 110 are the fractional bits
 */

//• Constructor with const float atributes
Fixed::Fixed(const float FxPoint)
{
    std::cout << "Float constructor called" << std::endl;
    this->_FtxPtNbr = roundf(FxPoint * (1 << this->_fract_bits));
}

// copy constructor
Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

// • Copy assignment operator =
Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator '=' called" << std::endl;
    if (this != &rhs)
    {
        this->_FtxPtNbr = rhs.getRawBits();
    }
    return (*this);
}

// • Copy assignment operator !=
bool Fixed::operator!=(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator '!=' called" << std::endl;
    return (this->_FtxPtNbr != rhs._FtxPtNbr);
    // if (this != &rhs)
    // {
    //     if (this->_FtxPtNbr == rhs._FtxPtNbr)
    //         return (false);
    // }
    // return(true);
}

// • Copy assignment operator ==
bool Fixed::operator==(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator '==' called" << std::endl;
    return (this->_FtxPtNbr == rhs._FtxPtNbr);
    // if (this != &rhs)
    // {
    //     if (this->_FtxPtNbr != rhs._FtxPtNbr)
    //         return (false);
    // }
    // return(true);
}

// • Copy assignment operator >
bool Fixed::operator>(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator '>' called" << std::endl;
    return (this->_FtxPtNbr > rhs._FtxPtNbr);
    
    // if (this != &rhs)
    // {
    //     if (this->_FtxPtNbr < rhs._FtxPtNbr)
    //         return (false);
    // }
    // return(true);
}

// • Copy assignment operator <
bool Fixed::operator<(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator '<' called" << std::endl;
    return (this->_FtxPtNbr < rhs._FtxPtNbr);
    
    // if (this != &rhs)
    // {
    //     if (this->_FtxPtNbr > rhs._FtxPtNbr)
    //         return (false);
    // }
    // return(true);
}

// • Copy assignment operator >=
bool Fixed::operator>=(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator >= called" << std::endl;
    return (this->_FtxPtNbr >= rhs._FtxPtNbr);
    
    // if (this != &rhs)
    // {
    //     if (this->_FtxPtNbr < rhs._FtxPtNbr)
    //         return (false);
    // }
    // return(true);
}

// • Copy assignment operator <=
bool Fixed::operator<=(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator <= called" << std::endl;
    return (this->_FtxPtNbr <= rhs._FtxPtNbr);
    
    // if (this != &rhs)
    // {
    //     if (this->_FtxPtNbr > rhs._FtxPtNbr)
    //         return (false);
    // }
    // return(true);
}


Fixed Fixed::operator+(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator '+' called" << std::endl;
    return (Fixed(this->toFloat() + rhs.toFloat()));

    // if (this != &rhs)
    // {
        
    //     this->_FtxPtNbr += rhs.getRawBits();
            
    // }
    // return (*this);
}

Fixed Fixed::operator-(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator '-' called" << std::endl;
    return (Fixed(this->toFloat() - rhs.toFloat()));
    
    // if (this != &rhs)
    // {
    //     this->_FtxPtNbr -= rhs.getRawBits();
    // }
    // return (*this);
}

Fixed Fixed::operator*(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator '*' called" << std::endl;
    return (Fixed(this->toFloat() * rhs.toFloat()));
    
    // if (this != &rhs)
    // {
    //     this->_FtxPtNbr *= rhs.getRawBits();
    // }
    // return (*this);
}

Fixed Fixed::operator/(Fixed const & rhs)
{
    std::cout << "Copy Assignment operator '/' called" << std::endl;
    if (rhs.getRawBits() == 0)
        return 0;
    return (Fixed(this->toFloat() / rhs.toFloat()));
    
    // if (this != &rhs)
    // {
    //     this->_FtxPtNbr /= rhs.getRawBits();
    // }
    // return (*this);
}

Fixed & Fixed::operator++()
{
    std::cout << "Copy Assignment operator ++instacia called" << std::endl;
    ++this->_FtxPtNbr;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    std::cout << "Copy Assignment operator instacia++ int called" << std::endl;
    Fixed temp(*this);
    
    ++this->_FtxPtNbr;
    
    return (temp);

}

// destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// getters
int Fixed::getRawBits() const
{
    //std::cout << "getrawbits member fuction called" << std::endl;
    return(this->_FtxPtNbr);
}

//setters

void Fixed::setRawBits( int const raw )
{
    this->_FtxPtNbr = raw;
}

int Fixed::toInt(void) const
{
	return (this->_FtxPtNbr >> this->_fract_bits);
}

/*
 * cast it float, so the division is done with float numbers
 */
float Fixed::toFloat(void) const
{
	return ((float)this->_FtxPtNbr / (float)(1 << this->_fract_bits));
}


// cout << overload
std::ostream &operator<<(std::ostream &outputStream, const Fixed &object)
{
	outputStream << object.toFloat();
	return (outputStream);
}

