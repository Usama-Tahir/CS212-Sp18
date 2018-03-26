#include <iostream>
using namespace std;

#include "Complex.h"

int main() {
    Complex c1(2,3);
    Complex c2(3,3);
    Complex checker;
//    checker.AddComplexV2(c1,c2);
    cout<<endl;
    Complex c3 = checker.AddComplexV1(c1,c2);
    Complex c4 = checker.SubtractComplex(c1,c2);
    Complex c5 = checker.MultiplyComplex(c1,c2);
    c5.printData();
    c4.printData();
    c3.printData();
    c1.print_n_complex_numbers();
    return 0;
}