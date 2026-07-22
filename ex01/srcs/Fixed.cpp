/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 18:08:01 by pmalumba          #+#    #+#             */
/*   Updated: 2026/07/22 18:08:02 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(){
    _fvalue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int init){
    _fvalue = init * (1 << _bits);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float init){
    _fvalue = roundf(init * (1 << _bits));
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
    return ((float)_fvalue / (1 << _bits));
}

int Fixed::toInt() const{
    return (_fvalue >> _bits);
}

