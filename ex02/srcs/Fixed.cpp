/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 18:08:09 by pmalumba          #+#    #+#             */
/*   Updated: 2026/07/22 18:51:44 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : _fvalue(0){
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int init){
    _fvalue = init * (1 << _bits);
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float init){
    _fvalue = roundf(init * (1 << _bits));
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src){
    _fvalue = src._fvalue;
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src){
    if (this != &src){
        _fvalue = src._fvalue;
        std::cout << "Copy assignment operator called" << std::endl;
    }
    return *this;
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const{
    return ((float)_fvalue / (1 << _bits));
}

int Fixed::toInt() const{
    return (_fvalue >> _bits);
}

bool Fixed::operator>(const Fixed& object) const{
    return (this->_fvalue > object._fvalue);
}

bool Fixed::operator<(const Fixed& object) const{
    return (this->_fvalue < object._fvalue);
}

bool Fixed::operator>=(const Fixed& object) const{
    return (this->_fvalue >= object._fvalue);
}

bool Fixed::operator<=(const Fixed& object) const{
    return (this->_fvalue <= object._fvalue);
}

bool Fixed::operator==(const Fixed& object) const{
    return (this->_fvalue == object._fvalue);
}

bool Fixed::operator!=(const Fixed& object) const{
    return (this->_fvalue != object._fvalue);
}


Fixed Fixed::operator+(const Fixed& copy) const
{
	return (Fixed)(this->toFloat() + copy.toFloat());
}
Fixed Fixed::operator-(const Fixed& copy) const
{
	return (Fixed)(this->toFloat() - copy.toFloat());
}
Fixed Fixed::operator*(const Fixed& copy) const
{
	return (Fixed)(this->toFloat() * copy.toFloat());
}
Fixed Fixed::operator/(const Fixed& copy) const
{
	return (Fixed)(this->toFloat() / copy.toFloat());
}

Fixed& Fixed::operator++(void)
{
	this->_fvalue += 1;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_fvalue += 1;
	return (temp);
}
Fixed& Fixed::operator--(void)
{
	this->_fvalue -= 1;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_fvalue -= 1;
	return (temp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    return b;
}


