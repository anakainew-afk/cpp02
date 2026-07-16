#include "../includes/Fixed.hpp"

Fixed::Fixed(){
    _fvalue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src){
    _fvalue = src._fvalue;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src){
    if (this != &src){
        _fvalue = src._fvalue;
        std::cout << "Copy assignment operator called" << std::endl;
    }
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return _fvalue;
}

void Fixed::setRawBits(int const raw){
    _fvalue = raw;
}

