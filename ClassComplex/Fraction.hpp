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
    Fraction(int a, int b): numerator(a), denominator(b){
        check();
    }
    
    void setFraction(int a, int b){
        numerator = a;
        denominator = b;
         check();
    }
    
    
    
    void check(){
        
        
        if (fabs(numerator) == fabs(denominator)) {
            numerator < 0 ? numerator = -1 : numerator = 1;
            denominator < 0 ? denominator = -1 : denominator = 1;
        }
    }
    
    
    double module(){
         check();
        if (denominator != 0)
            return fabs( (double)numerator / (double)denominator);
        else return 0;
    }
    
    void print(){
        check();
        std::cout << numerator << "/" << denominator << std::endl;
    }
    
    
    
    void operator -(int temp) {
         check();
        numerator=numerator  - temp * denominator;
    }
    
    
    void operator -(Fraction temp){
         check();
        if (denominator == temp.denominator)
            numerator = numerator - temp.numerator;
        else{
            numerator = numerator * temp.denominator - temp.numerator * denominator;
            denominator *= temp.denominator;
        }
    }
    
    
    
    operator double(){
         check();
        return (double)numerator/(double)denominator;
    }
    
    void operator !(){
         check();
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
