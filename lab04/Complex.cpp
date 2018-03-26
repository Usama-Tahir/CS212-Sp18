
#include "Complex.h"
#include <iostream>
using namespace std;
int Complex::n_complex_numbers = 0;
long Complex::get_real() {
    return realNumber;
}

void Complex::set_real(double l) {
    realNumber = l;
}

void Complex::set_imaginary(double l) {
    imaginaryNumber = l;
}
long Complex::get_imaginary() {
    return imaginaryNumber;
}

Complex::Complex() {
    realNumber = 0;
    imaginaryNumber = 0;
    n_complex_numbers++;
}
void Complex::print_n_complex_numbers() {
    cout<<"Total " << n_complex_numbers<<" objects are created"<<endl;
}
Complex Complex::AddComplexV1(Complex c1, Complex c2) {
    Complex temp;
    double temp1 = c1.get_real() + c2.get_real();
    temp.set_real(temp1);
    double temp2 = c1.get_imaginary() + c2.get_imaginary();
    temp.set_imaginary(temp2);
    return temp;
}

Complex Complex::MultiplyComplex(Complex c1, Complex c2) {
    Complex temp;
    double temp1 = c1.get_real() * c2.get_real();
    temp.set_real(temp1);
    double temp2 = c1.get_imaginary() * c2.get_imaginary();
    temp.set_imaginary(temp2);
    return temp;
}
void Complex::AddComplexV2(Complex c1, Complex c2) {
    cout<<c1.get_real() + c2.get_real()<<" + "<< c1.get_imaginary() + c2.get_imaginary()<<"ι";

}

Complex Complex::SubtractComplex(Complex c1, Complex c2) {
    Complex temp;
    double temp1 = c1.get_real() - c2.get_real();
    temp.set_real(temp1);
    double temp2 = c1.get_imaginary() - c2.get_imaginary();
    temp.set_imaginary(temp2);
    return temp;
}





Complex::Complex(double a , double b) {
    realNumber = a;
    imaginaryNumber = b;
    n_complex_numbers++;
}
void Complex::printData() {
    cout<< realNumber << " + "<<imaginaryNumber<<"ι"<<endl;
}
void Complex::calculateConjugate() {
    cout<< realNumber << " - "<<imaginaryNumber<<"ι"<<endl;
}