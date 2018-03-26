//
// Created by usama on 2/26/18.
//

#ifndef OOP_COMPLEX_H
#define OOP_COMPLEX_H


#include <cmath>

class Complex {
public:
    Complex();
    Complex(double, double);
    void printData();
    void calculateConjugate();

private:
    double realNumber;
    double imaginaryNumber;


};


#endif //OOP_COMPLEX_H
