//
//  implementation.cpp
//  HOMEWORK 03 OPERATOR OVERLOADING
//
//  Created by ax on 2/17/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "fraction.h"
#include <iostream>
#include <string>
#include <sstream>

/*** constructor ***/

Fraction::Fraction() {} // no arg constructor
// multi arg constructor
Fraction::Fraction(int p_w, int p_n, int p_d) {
    m_numerator = p_w * p_d + p_n;
    m_denominator = p_d;
}

Fraction::operator int() {
    
    return 0;
}

/*** friends ***/
std::ostream& operator<<(std::ostream& out, const Fraction& printMe) {
    out << printMe.m_numerator;
    out << "/";
    out << printMe.m_denominator;
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& readMe) {
    
    std::cout << std::endl << "Extraction operator overload called... " << std::endl;
    
    // somehow parse whatever comes in to a reduced fraction
    // 3+1/2
    // 1/2
    // 1
    // or
    // 64+7/8
    
    return in;
}
// fraction addition
Fraction operator+(const Fraction &left, const Fraction &right) {
    
    Fraction result;
    
    // simple multiply to find common denominator
    int common_denominator = left.m_denominator * right.m_denominator;
    
    // multiply numberators to match common denominator
    result.m_numerator = (left.m_numerator * right.m_denominator) + (right.m_numerator * left.m_denominator);
    
    result.m_denominator = common_denominator;
    
    // return Fraction object with numerator and denominator set
    return result;

}
// fraction subtraction
Fraction operator-(const Fraction &left, const Fraction &right) {
    
    Fraction result;
    
    // simple multiply to find common denominator
    int common_denominator = left.m_denominator * right.m_denominator;
    
    // multiply numberators to match common denominator
    result.m_numerator = (left.m_numerator * right.m_denominator) - (right.m_numerator * left.m_denominator);
    
    result.m_denominator = common_denominator;
    
    // return Fraction object with numerator and denominator set
    return result;
    
}
// fraction multiplication
Fraction operator*(const Fraction &left, const Fraction &right) {
    
    Fraction result;
    
    // multiply across
    result.m_numerator = left.m_numerator * right.m_numerator;
    result.m_denominator = right.m_denominator * left.m_denominator;
    
    // return Fraction object with numerator and denominator set
    return result;
    
}
// fraction division
Fraction operator/(const Fraction &left, const Fraction &right) {
    
    Fraction result;
    
    // divide across
    result.m_numerator = left.m_numerator * right.m_denominator;
    result.m_denominator = left.m_denominator * right.m_numerator;
    
    // return Fraction object with numerator and denominator set
    return result;
    
}

// prefix increment
Fraction& Fraction::operator++() {
    std::cout << std::endl << "Prefix increment operator overload called... " << std::endl;
    // increment fraction by adding denominator value to numberator
    this->m_numerator = this->m_numerator + this->m_denominator;
    return *this;
}

 // postfix increment, dum is placeholder
Fraction Fraction::operator++(int dum) {
    std::cout << std::endl << "Postfix increment operator overload called... " << std::endl;
    Fraction f_temp(0, m_numerator, m_denominator);
    
    m_numerator += m_denominator;
    
    return f_temp;
}

// prefix deccrement
Fraction& Fraction::operator--() {
    std::cout << std::endl << "Prefix decrement operator overload called... " << std::endl;
    // decrement fraction by adding denominator value to numberator
    this->m_numerator = this->m_numerator - this->m_denominator;
    return *this;
}

// postfix decrement, dum is placeholder
Fraction Fraction::operator--(int dum) {
    std::cout << std::endl << "Postfix decrement operator overload called... " << std::endl;
    
    Fraction f_temp(0, m_numerator, m_denominator);
    
    m_numerator -= m_denominator;
    
    return f_temp;
}

// augment assignment
Fraction Fraction:: operator+=(const int &right) {
    std::cout << std::endl << "Augmented INT assignment operator overload called... " << std::endl;
    // for return of result
    Fraction result;
    
    // convert integer input into whole fraction
    Fraction f_tmp(0, m_numerator, m_denominator);
    
    f_tmp.m_numerator = right;
    f_tmp.m_denominator = 1;
    
    // simple multiply to find common denominator
    int common_denominator = this->m_denominator * f_tmp.m_denominator;
    
    // multiply numberators to match common denominator
    result.m_numerator = (this->m_numerator * f_tmp.m_denominator) + (f_tmp.m_numerator * this->m_denominator);
    
    result.m_denominator = common_denominator;
    this->m_numerator = result.m_numerator;
    this->m_denominator = result.m_denominator;
    
    return result;
}

Fraction Fraction:: operator-=(const Fraction &right) {
    std::cout << std::endl << "Augmented FRACTION assignment operator overload called... " << std::endl;
    
    Fraction f_tmp(0, m_numerator, m_denominator);
    
    f_tmp = right;
    
    
    Fraction result;
    
    // simple multiply to find common denominator
    int common_denominator = this->m_denominator * right.m_denominator;
    
    // multiply numberators to match common denominator
    result.m_numerator = (this->m_numerator * right.m_denominator) - (right.m_numerator * this->m_denominator);
    
    result.m_denominator = common_denominator;
    
    this->m_numerator = result.m_numerator;
    this->m_denominator = result.m_denominator;
    
    
    // return Fraction object with numerator and denominator set
    return result;
    
}




























































