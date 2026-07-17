#include "../includes/Fixed.hpp"

Fixed::Fixed(){
    _fvalue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int init){
    _fvalue = init;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float init){
    _fvalue = init;
    std::cout << "Float constructor called" << std::endl;
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

float Fixed::toFloat() const{
    
}

