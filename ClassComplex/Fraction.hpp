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
    Fraction(int a, int b): numerator(a), denominator(b){}
    
    void setFraction(int a, int b){
        numerator = a;
        denominator = b;
    }
    
    double module(){
        if (denominator != 0)
            return fabs( (double)numerator / (double)denominator);
        else return 00;
    }
    
    void print(){
        std::cout << numerator << "/" << denominator << std::endl;
    }
    
    
    
    void operator -(int temp) {
        numerator=numerator-temp;
    }
    
    
    void operator -(Fraction temp){
        
        if (denominator == temp.denominator)
            numerator = numerator - temp.numerator;
        else{
            numerator = numerator * temp.denominator - temp.numerator * denominator;
            denominator *= temp.denominator;
        }
        
    }
    
    
    
    operator double(){
        return (double)numerator/(double)denominator;
    }
    
    void operator !(){
        if (numerator < 0) {
            int temp = -numerator;
            numerator = -denominator;
            denominator = temp;
        } else {
            int temp = numerator;
            numerator = denominator;
            denominator = temp;
        }
        
    }
    
    //~Fraction();
};



#endif /* Fraction_hpp */
