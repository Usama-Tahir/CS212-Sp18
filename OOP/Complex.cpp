//
// Created by usama on 2/26/18.
//

#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex() {
    realNumber = 1;
    imaginaryNumber = 1;
}
Complex::Complex(double a , double b) {
    realNumber = a;
    imaginaryNumber = b;
}
void Complex::printData() {
    cout<< realNumber << " + "<<imaginaryNumber<<"ι"<<endl;
}
void Complex::calculateConjugate() {
    cout<< realNumber << " - "<<imaginaryNumber<<"ι"<<endl;
}
