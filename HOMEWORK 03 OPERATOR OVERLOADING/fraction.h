//
//  implementation.hpp
//  HOMEWORK 03 OPERATOR OVERLOADING
//
//  Created by ax on 2/17/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#ifndef fraction_h
#define fraction_h

#include <iostream>

class Fraction {
    
public:

    // constructor
    Fraction();
    Fraction(int p_w, int p_n, int p_d);
    
    // convert int to fraction?
    operator int();
    
    // friends: streams
    friend std::ostream& operator << (std::ostream& out, const Fraction& printMe);
    friend std::istream& operator >> (std::istream& in, Fraction& readMe);
    // friends: multipliers
    friend Fraction operator+(const Fraction &left, const Fraction &right);
    friend Fraction operator-(const Fraction &left, const Fraction &right);
    friend Fraction operator*(const Fraction &left, const Fraction &right);
    friend Fraction operator/(const Fraction &left, const Fraction &right);
    
    // family: pre / post increment decrement
    // prefix increment
    Fraction& operator++();
    // postfix increment
    Fraction operator++(int);
    // prefix decrement
    Fraction& operator--();
    // prefix decrement
    Fraction operator--(int);
    
    // augment assignment
    Fraction operator+=(const int &right);
    Fraction operator-=(const Fraction &right);
    
private:
    int m_numerator;
    int m_denominator;
};

#endif
