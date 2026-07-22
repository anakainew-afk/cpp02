/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 18:08:07 by pmalumba          #+#    #+#             */
/*   Updated: 2026/07/22 18:51:11 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed{
private:
    int _fvalue;
    static const int _bits = 8;
public:
    Fixed();
    Fixed(int init);
    Fixed(const float init);
    Fixed(const Fixed& src); //copy constructor
    Fixed& operator=(const Fixed& src); // copy assignment operator overload
    ~Fixed();

    int toInt( void ) const;
    float toFloat( void ) const;

    bool operator>(const Fixed& object) const;
    bool operator<(const Fixed& object) const;
    bool operator>=(const Fixed& object) const;
    bool operator<=(const Fixed& object) const;
    bool operator==(const Fixed& object) const;
    bool operator!=(const Fixed& object) const;

    Fixed operator+(const Fixed& copy) const;
    Fixed operator-(const Fixed& copy) const;
    Fixed operator*(const Fixed& copy) const;
    Fixed operator/(const Fixed& copy) const;

    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& COUT, const Fixed& object);

#endif