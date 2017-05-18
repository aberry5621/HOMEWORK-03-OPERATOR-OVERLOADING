//
//  main.cpp
//  HOMEWORK 03 OPERATOR OVERLOADING
//
//  Created by ax on 2/17/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "fraction.h"
#include <iostream>

using namespace std;

int main()
{
    
    Fraction f1(0, 3, 4);
    Fraction f2(0, 1, 5);
    
    /* put aside user input for now
    cout << "TEST 1: >> operator" << endl;
    
    cout << "Enter the first fraction: ";
    cin >> f1;
    
    cout << "Enter the second fraction: ";
    cin >> f2;
    */
    
    cout << "\n\nTEST 2: << operator, reduced forms" << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    
    //Arithmetic Operations
    cout << "\n\nTEST 3: +, -, *, /" << endl;
    cout << "f1 + f2 = " << f1 + f2 << endl;
    cout << "f1 - f2 = " << f1 - f2 << endl;
    cout << "f1 * f1 = " << f1 * f2 << endl;
    cout << "f1 / f1 = " << f1 / f2 << endl;
    
    //Preincrement
    cout << "\n\nTEST 4: Preincrement operator" << endl;
    cout << "(++f1) + f2 = " << (++f1) + f2 << endl;
    cout << "(++f1) - f2 = " << (++f1) - f2 << endl;
    cout << "(++f1) * f2 = " << (++f1) * f2 << endl;
    cout << "(++f1) / f2 = " << (++f1) / f2 << endl;
    
    //Postincrement
    cout << "\n\nTEST 5: Postincrement operator" << endl;
    cout << "(f1++) + f2 = " << (f1++) + f2 << endl;
    cout << "(f1++) - f2 = " << (f1++) - f2 << endl;
    cout << "(f1++) * f2 = " << (f1++) * f2 << endl;
    cout << "(f1++) / f2 = " << (f1++) / f2 << endl;
    
    //Predecrement
    cout << "\n\nTEST 6: Predecrement operator" << endl;
    cout << "(--f1) + f2 = " << (--f1) + f2 << endl;
    cout << "(--f1) - f2 = " << (--f1) - f2 << endl;
    cout << "(--f1) * f2 = " << (--f1) * f2 << endl;
    cout << "(--f1) / f2 = " << (--f1) / f2 << endl;
    
    //Postdecrement
    cout << "\n\nTEST 7: Postdecrement operator" << endl;
    cout << "(f1--) + f2 = " << (f1--) + f2 << endl;
    cout << "(f1--) - f2 = " << (f1--) - f2 << endl;
    cout << "(f1--) * f2 = " << (f1--) * f2 << endl;
    cout << "(f1--) / f2 = " << (f1--) / f2 << endl;

    
    cout << "\n\nTEST 8: Augmented arithmetic operators" << endl;
    cout << "\n\nValues of fractions BEFORE testing augmented operators:" << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "\nThese statements are executed..." << endl;
    cout << "f1 += 1;\nf2 -= f1;\nf1 *= 3;\nf2 /= 2; " << endl;
    
    //Augmented assignments
    f1 += 1;
    
    cout << "\nValues of fractions AFTER testing augmented + operator..." << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    
    f2 -= f1;
    
    cout << "\nValues of fractions AFTER testing augmented - operator..." << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
   
    f1 *= 3;
    
    cout << "\nValues of fractions AFTER testing augmented * operator..." << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    
    f2 /= 2;
    
    cout << "\nValues of fractions AFTER testing augmented / operator..." << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    
    
    cout << "\n\nTEST 9: ==, >, <, >=, <=, !=" << endl;
    //Relational operators
    if (f1 == f2)
        cout << "f1 == f2 tested true." << endl;
    else
        cout << "f1 == f2 tested false." << endl;
    if (f1 > f2)
        cout << "f1 > f2 tested true." << endl;
    else
        cout << "f1 > f2 tested false." << endl;
    if (f1 < f2)
        cout << "f1 < f2 tested true." << endl;
    else
        cout << "f1 < f2 tested false." << endl;
        cout << "\nThis statement is executed..." << endl;
        cout << "f1 = f2; " << endl;
    
    
    f1 = f2;
    
    if (f1 >= f2)
        cout << "f1 >= f2 tested true." << endl;
    else
        cout << "f1 >= f2 tested false." << endl;
        cout << "\nThis statement is executed..." << endl;
        cout << "f1 -= 1;" << endl;
    
    f1 -= 1;
    
    if (f1 <= f2)
        cout << "f1 <= f2 tesed true." << endl;
    else
        cout << "f1 <= f2 tesed false." << endl;
    if (f1 != f2)
        cout << "f1 != f2 tested true." << endl;
    else
        cout << "f1 != f2 tested false." << endl;
     
    /* */
    return 0;
}
