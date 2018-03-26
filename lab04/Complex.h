#ifndef OOP_COMPLEX_H
#define OOP_COMPLEX_H


#include <cmath>

class Complex {
public:
    Complex();
    Complex(double, double);
    void printData();
    void calculateConjugate();
    static void print_n_complex_numbers();
    Complex AddComplexV1(Complex,Complex);
    void AddComplexV2(Complex,Complex);
    Complex SubtractComplex(Complex,Complex);
    Complex MultiplyComplex(Complex, Complex);

    long get_real();
    long get_imaginary();
    void set_real(double);
    void set_imaginary(double);

private:
    double realNumber;
    double imaginaryNumber;
    static int n_complex_numbers;


};


#endif //OOP_COMPLEX_H