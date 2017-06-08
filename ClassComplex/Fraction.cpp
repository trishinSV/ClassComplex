//
//  Fraction.cpp
//  ClassComplex
//
//  Created by Сергей Тришин on 01.06.17.
//  Copyright © 2017 Сергей Тришин. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Fraction.hpp"

using namespace std;

void Fraction:: setFraction(){
    cout << "Введите числитель"<< endl;
    cin >> numerator;
    cout << "Введите знаменатель"<< endl;
    cin >> denominator;
    check();
}


Fraction:: Fraction(const Fraction & obj){
    
    numerator = obj.numerator;
    denominator = obj.denominator;
    
}
void Fraction:: check(){
    
    
    if (fabs(numerator) == fabs(denominator)) {
        numerator < 0 ? numerator = -1 : numerator = 1;
        denominator < 0 ? denominator = -1 : denominator = 1;
    }
}


double Fraction:: module(){
    check();
    if (denominator != 0)
        return fabs( (double)numerator / (double)denominator);
    else return 0;
}

void Fraction:: print(){
    check();
    std::cout << numerator << "/" << denominator << std::endl;
}



void Fraction:: operator -(int temp) {
    check();
    numerator=numerator  - temp * denominator;
}


void Fraction:: operator -(Fraction temp){
    check();
    if (denominator == temp.denominator)
        numerator = numerator - temp.numerator;
    else{
        numerator = numerator * temp.denominator - temp.numerator * denominator;
        denominator *= temp.denominator;
    }
}



Fraction:: operator  double(){
    check();
    return (double)numerator/(double)denominator;
}

void Fraction:: operator !(){
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
