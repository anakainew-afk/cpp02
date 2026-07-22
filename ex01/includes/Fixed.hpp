/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 18:07:58 by pmalumba          #+#    #+#             */
/*   Updated: 2026/07/22 18:07:59 by pmalumba         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& COUT, const Fixed& object);

#endif