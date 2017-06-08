//
//  Fraction.hpp
//  ClassFraction
//
//  Created by Сергей Тришин on 20.04.17.
//  Copyright © 2017 Сергей Тришин. All rights reserved.
//

#ifndef Fraction_hpp
#define Fraction_hpp

#include <iostream>
#include <math.h>

class Fraction {
    int numerator;
    int denominator;
    
public:
    Fraction(): numerator(0), denominator(0){}
    Fraction(int a, int b): numerator(a), denominator(b){ check(); }
    Fraction(const Fraction & obj);
    void setFraction();
    void check();
    double module();
    void print();
    void operator -(int temp);
    void operator -(Fraction temp);
    operator double();
    void operator !();
    
    ~Fraction(){ numerator = 0; denominator = 0;}
};



#endif /* Fraction_hpp */
