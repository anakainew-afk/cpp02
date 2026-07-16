#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed{
private:
    int _fvalue;
    static const int _bits = 8;
public:
    Fixed();
    Fixed(const Fixed& src); //copy constructor
    Fixed& operator=(const Fixed& src); // copy assignment operator overload
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif