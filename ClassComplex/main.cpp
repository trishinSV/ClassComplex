//
//  main.cpp
//  ClassFraction
//
//  Created by Сергей Тришин on 20.04.17.
//  Copyright © 2017 Сергей Тришин. All rights reserved.
//

#include <iostream>
#include "Fraction.hpp"
using namespace std;


int main(int argc, const char * argv[]) {

    Fraction fraction(12, 4);
    Fraction fraction1(7, 3);
    
   // fraction.setFraction(12, 4);
   // fraction1.setFraction(7, 3);
    
    cout << fraction.module() << endl;
    
    fraction-3;
    fraction.print();
    
    fraction-fraction1;
    fraction.print();
    
    !fraction;
    fraction.print();
    
    double test = (double)fraction;
    cout << test << endl;
    
    getchar();
    return 0;
}
