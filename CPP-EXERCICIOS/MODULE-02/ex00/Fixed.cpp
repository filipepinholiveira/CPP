
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : _FtxPtNbr(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

// • Copy assignment operator
    Fixed & Fixed::operator=(Fixed const & rhs)
    {
        std::cout << "Copy Assignment operator called" << std::endl;
        if (this != &rhs)
        {
            this->_FtxPtNbr = rhs.getRawBits();
        }
        return (*this);
    }


// destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// getters
int Fixed::getRawBits() const
{
    std::cout << "getrawbits member fuction called" << std::endl;
    return(this->_FtxPtNbr);
}

//setters

void Fixed::setRawBits( int const raw )
{
    this->_FtxPtNbr = raw;
}
